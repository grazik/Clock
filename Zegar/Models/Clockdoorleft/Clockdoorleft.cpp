#include "Models/Clockdoorleft/Clockdoorleft.h"
#include "Models/Clockdoorleft/ClockdoorleftInternal.h"

Clockdoorleft::Clockdoorleft(Shader* shader, Texture* tex, glm::vec3 pos) {
	setName(ClockdoorleftInternal::name);
	setVertices(ClockdoorleftInternal::vertices);
	setVertexNormals(ClockdoorleftInternal::vertexNormals);
	setTexCoords(ClockdoorleftInternal::texCoords);
	setVertexCount(ClockdoorleftInternal::vertexCount);
	setShader(shader);
	setPostiotion(pos);
	texture = tex;
	open = false;
	doorOperate = false;
	prepareObject();
}

Clockdoorleft::~Clockdoorleft() {
	glDeleteVertexArrays(1, &vao); //Usuni�cie vao
	glDeleteBuffers(1, &bufVertices); //Usuni�cie VBO z wierzcho�kami
	glDeleteBuffers(1, &bufNormals); //Usuni�cie VBO z wektorami normalnymi
	glDeleteBuffers(1, &bufTexCoords); //Usuni�cie VBO z teksturami
}

void Clockdoorleft::drawObject(glm::mat4 mP, glm::mat4 mV) {
	//Wylicz macierz modelu rysowanego obiektu

	glm::mat4 mM = glm::mat4(1.0f);
	mM = glm::translate(mM, getPosition());


	glm::quat close = glm::quat_cast(glm::rotate(glm::mat4(1.0f), 3.14f * 0 / 180, glm::vec3(0, 1, 0)));  //0 - 180
	glm::quat open = glm::quat_cast(glm::rotate(glm::mat4(1.0f), 3.14f * 180 / 180, glm::vec3(0, 1, 0)));  //0 - 180
	glm::mat4 rotate;

	float factor = glfwGetTime();
	if (factor > 1) {
		factor = 1;
	}

	if (doorOperate) {
		if (!getOpen()) {
			factor = 1 - factor;
		}
		rotate = glm::mat4_cast(glm::mix(close, open, factor));
	}
	else {
		if (getOpen()) {
			rotate = glm::mat4_cast(open);
		}
		else {
			rotate = glm::mat4_cast(close);
		}
	}

	mM = mM * rotate;

	setUniforms();
	//W��czenie programu cieniuj�cego, kt�ry ma zosta� u�yty do rysowania
	//W tym programie wystarczy�oby wywo�a� to raz, w setupShaders, ale chodzi o pokazanie,
	//�e mozna zmienia� program cieniuj�cy podczas rysowania jednej sceny
	getShader()->use();

	//Przeka� do shadera macierze P,V i M.
	//W linijkach poni�ej, polecenie:
	//  shaderProgram->getUniformLocation("P")
	//pobiera numer slotu odpowiadaj�cego zmiennej jednorodnej o podanej nazwie
	//UWAGA! "P" w powy�szym poleceniu odpowiada deklaracji "uniform mat4 P;" w vertex shaderze,
	//a mP w glm::value_ptr(mP) odpowiada argumentowi  "mat4 mP;" TYM pliku.
	//Ca�a poni�sza linijka przekazuje do zmiennej jednorodnej P w vertex shaderze dane z argumentu mP niniejszej funkcji
	//Pozosta�e polecenia dzia�aj� podobnie.
	glUniformMatrix4fv(getShader()->getUniformLocation("P"), 1, false, glm::value_ptr(mP));
	glUniformMatrix4fv(getShader()->getUniformLocation("V"), 1, false, glm::value_ptr(mV));
	glUniformMatrix4fv(getShader()->getUniformLocation("M"), 1, false, glm::value_ptr(mM));
	glUniform1i(getShader()->getUniformLocation("textureMap0"), 0);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture->getHandler());

	//Uaktywnienie VAO i tym samym uaktywnienie predefiniowanych w tym VAO powi�za� slot�w atrybut�w z tablicami z danymi
	glBindVertexArray(vao);

	//Narysowanie obiektu
	glDrawArrays(GL_TRIANGLES, 0, static_cast<unsigned int>(getVertexCount()));

	//Posprz�tanie po sobie (niekonieczne w sumie je�eli korzystamy z VAO dla ka�dego rysowanego obiektu)
	glBindVertexArray(0);
}

void Clockdoorleft::prepareObject() {
	//Zbuduj VBO z danymi obiektu do narysowania
	bufVertices = Graphics::makeBuffer(getVertices(), getVertexCount(), sizeof(float) * 4); //VBO ze wsp�rz�dnymi wierzcho�k�w
	bufNormals = Graphics::makeBuffer(getVertexNormals(), getVertexCount(), sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho�k�w
	bufTexCoords = Graphics::makeBuffer(getTexCoords(), getVertexCount(), sizeof(float) * 2);


	//Zbuduj VAO wi���cy atrybuty z konkretnymi VBO
	glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej

	glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO

	Graphics::assignVBOtoAttribute(getShader(), "vertex", bufVertices, 4); //"vertex" odnosi si� do deklaracji "in vec4 vertex;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "normal", bufNormals, 4); //"normal" odnosi si� do deklaracji "in vec4 normal;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "texCoord0", bufTexCoords, 2);

	glBindVertexArray(0); //Dezaktywuj VAO
}