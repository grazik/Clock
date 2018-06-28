#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Bird : public Model {
public:
	Bird(Shader* shader, Texture* tex, glm::vec3 pos);
	~Bird();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }
	int getIteration() { return iteration; }
	bool getDirection() { return direction; }
	bool getStatus() { return birdOperate; }

	void drawObject(glm::mat4 mP, glm::mat4 mV);
	void prepareObject();
	void changeDirection() { direction = !direction; }
	void incrementIteration() { iteration++; }
	void clearIteration() { iteration = 0; }
	void changeOperate() { birdOperate = !birdOperate; }

private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;

	bool direction; // true forward, false backward
	bool birdOperate;
	int iteration;
};