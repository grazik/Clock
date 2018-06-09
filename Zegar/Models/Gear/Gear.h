#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Gear: public Model {
	public:
		Gear(Shader* shader, Texture* tex);

		float getAngke() { return angle; }
		GLuint getVao() { return vao; }
		GLuint getBufVertices() { return bufVertices; }
		GLuint getBufNormals() { return bufNormals; }
		GLuint getBufTexCoords() { return bufTexCoords; }
		Texture* getTexture() { return texture; }

		void SetAngle(float newAngle) { angle = newAngle; }
		void updateAngle(float newAngle) { angle += newAngle; }

		void drawObject(glm::mat4 mP, glm::mat4 mV, glm::mat4 mM);
		void prepareObject();
		virtual ~Gear() {};

private:
	float angle;
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;
};