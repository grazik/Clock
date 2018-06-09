#include "Models/Gear/Gear.h"
#include "Models/Gear/GearInternal.h"

Gear::Gear() {
	setName(GearInternal::name);
	setTextName(GearInternal::texName);
	setVertices(GearInternal::vertices);
	setVertexNormals(GearInternal::vertexNormals);
	setTexCoords(GearInternal::texCoords);
	setVertexCount(GearInternal::vertexCount);
	//setShader(config::defaultShader);
}

void Gear::drawObject() {

}

void Gear::prepareObject() {
	//Zbuduj VBO z danymi obiektu do narysowania
	bufVertices = Graphics::makeBuffer(getVertices(), getVertexCount(), sizeof(float) * 4); //VBO ze wspó³rzêdnymi wierzcho³ków
	bufNormals = Graphics::makeBuffer(getVertexNormals(), getVertexCount(), sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho³ków

																			   //Zbuduj VAO wi¹¿¹cy atrybuty z konkretnymi VBO
	glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej

	glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO

	Graphics::assignVBOtoAttribute(getShader(), "vertex", bufVertices, 4); //"vertex" odnosi siê do deklaracji "in vec4 vertex;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "normal", bufNormals, 4); //"normal" odnosi siê do deklaracji "in vec4 normal;" w vertex shaderze

	glBindVertexArray(0); //Dezaktywuj VAO
}