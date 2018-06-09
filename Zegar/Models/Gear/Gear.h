#pragma once
#include "Models/Model.h"

class Gear: public Model {
	public:
		Gear();	

		GLuint getVao() { return vao; }
		GLuint getBufVertices() { return bufVertices; }
		GLuint getBufNormals() { return bufNormals; }

		void drawObject();
		void prepareObject();
		virtual ~Gear() {};

private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
};