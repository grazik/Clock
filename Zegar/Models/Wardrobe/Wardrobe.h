#pragma once

#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Wardrobe : public Model {
public:
	Wardrobe(Shader* shader, Texture* tex, glm::vec3 pos);
	~Wardrobe();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }

	void prepareObject();
	void drawObject(glm::mat4 mP, glm::mat4 mV);


private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj�cy tablic� wsp�rz�dnych wierzcho�k�w
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj�cy tablick� wektor�w normalnych
	GLuint bufTexCoords;
	Texture* texture;
};