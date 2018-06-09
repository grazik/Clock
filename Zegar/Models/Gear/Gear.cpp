#include "Models/Gear/Gear.h"
#include "Models/Gear/GearInternal.h"

Gear::Gear(Shader* shader, Texture* tex) {
	setName(GearInternal::name);
	setTextName(GearInternal::texName);
	setVertices(GearInternal::vertices);
	setVertexNormals(GearInternal::vertexNormals);
	setTexCoords(GearInternal::texCoords);
	setVertexCount(GearInternal::vertexCount);
	setShader(shader);
	texture = tex;
	angle = 0;
}

void Gear::drawObject(glm::mat4 mP, glm::mat4 mV, glm::mat4 mM) {
	//W³¹czenie programu cieniuj¹cego, który ma zostaæ u¿yty do rysowania
	//W tym programie wystarczy³oby wywo³aæ to raz, w setupShaders, ale chodzi o pokazanie,
	//¿e mozna zmieniaæ program cieniuj¹cy podczas rysowania jednej sceny
	getShader()->use();

	//Przeka¿ do shadera macierze P,V i M.
	//W linijkach poni¿ej, polecenie:
	//  shaderProgram->getUniformLocation("P")
	//pobiera numer slotu odpowiadaj¹cego zmiennej jednorodnej o podanej nazwie
	//UWAGA! "P" w powy¿szym poleceniu odpowiada deklaracji "uniform mat4 P;" w vertex shaderze,
	//a mP w glm::value_ptr(mP) odpowiada argumentowi  "mat4 mP;" TYM pliku.
	//Ca³a poni¿sza linijka przekazuje do zmiennej jednorodnej P w vertex shaderze dane z argumentu mP niniejszej funkcji
	//Pozosta³e polecenia dzia³aj¹ podobnie.
	glUniformMatrix4fv(getShader()->getUniformLocation("P"), 1, false, glm::value_ptr(mP));
	glUniformMatrix4fv(getShader()->getUniformLocation("V"), 1, false, glm::value_ptr(mV));
	glUniformMatrix4fv(getShader()->getUniformLocation("M"), 1, false, glm::value_ptr(mM));
	glUniform1i(getShader()->getUniformLocation("textureMap0"), 0);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture->getHandler());

	//Uaktywnienie VAO i tym samym uaktywnienie predefiniowanych w tym VAO powi¹zañ slotów atrybutów z tablicami z danymi
	glBindVertexArray(vao);

	//Narysowanie obiektu
	glDrawArrays(GL_TRIANGLES, 0, static_cast<unsigned int>(getVertexCount()));

	//Posprz¹tanie po sobie (niekonieczne w sumie je¿eli korzystamy z VAO dla ka¿dego rysowanego obiektu)
	glBindVertexArray(0);
}

void Gear::prepareObject() {
	//Zbuduj VBO z danymi obiektu do narysowania
	bufVertices = Graphics::makeBuffer(getVertices(), getVertexCount(), sizeof(float) * 4); //VBO ze wspó³rzêdnymi wierzcho³ków
	bufNormals = Graphics::makeBuffer(getVertexNormals(), getVertexCount(), sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho³ków
	bufTexCoords = Graphics::makeBuffer(getTexCoords(), getVertexCount(), sizeof(float) * 2);

																			   //Zbuduj VAO wi¹¿¹cy atrybuty z konkretnymi VBO
	glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej

	glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO

	Graphics::assignVBOtoAttribute(getShader(), "vertex", bufVertices, 4); //"vertex" odnosi siê do deklaracji "in vec4 vertex;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "normal", bufNormals, 4); //"normal" odnosi siê do deklaracji "in vec4 normal;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "texCoord0", bufTexCoords, 2);

	glBindVertexArray(0); //Dezaktywuj VAO
}