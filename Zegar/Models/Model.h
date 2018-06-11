#pragma once

#include <vector>
#include "config.h"
#include "Classes/headers/Shader.h"
#include "Classes/headers/Graphics.h"

class Model {
	public:
		virtual ~Model() {};
		int getVertexCount() { return vertexCount; }
		float* getVertices() { return vertices; }
		float* getVertexNormals() { return vertexNormals; }
		float* getTexCoords() { return texCoords; }
		std::string getTexName() { return texName; }
		std::string getName() { return name; }
		Shader* getShader() { return shader; }
		glm::vec3 getPosition() { return position; }

		void setTextName(std::string name) { texName = name; }
		void setName(std::string newName) { name = newName; }
		void setVertexCount(int vertexNumber) { vertexCount = vertexNumber; }
		void setVertices(float* verticesArray) { vertices = verticesArray; }
		void setVertexNormals(float* vertexNormalsArray) { vertexNormals = vertexNormalsArray; }
		void setTexCoords(float* texCoordsArray) { texCoords = texCoordsArray; }
		void setShader(Shader* newShader) { shader = newShader; }
		void setPostiotion(glm::vec3 pos) { position = pos; }

		virtual void drawObject(glm::mat4 mP, glm::mat4 mV) = 0;
		virtual void prepareObject() = 0;
		virtual void updateAngle(float newAngle) {};

	private:
		std::string texName;
		std::string name;
		int vertexCount;
		float* vertices;
		float* vertexNormals;
		float* texCoords;
		Shader* shader;
		glm::vec3 position;
};