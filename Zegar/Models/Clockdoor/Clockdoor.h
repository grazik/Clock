#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Clockdoor : public Model {
public:
	Clockdoor(Shader* shader, Texture* tex, glm::vec3 pos);
	~Clockdoor();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }

	void drawObject(glm::mat4 mP, glm::mat4 mV);
	void prepareObject();

private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj�cy tablic� wsp�rz�dnych wierzcho�k�w
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj�cy tablick� wektor�w normalnych
	GLuint bufTexCoords;
	Texture* texture;

};