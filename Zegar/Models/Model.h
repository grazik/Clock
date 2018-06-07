#pragma once

#include <vector>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>

class Model {
	public:
		~Model() {};
		int getVertexCount() { return vertexCount; }
		float* getVertices() { return vertices; }
		float* getVertexNormals() { return vertexNormals; }
		float* getTexCoords() { return texCoords; }
		std::string getTexName() { return texName; }

		void setTextName(std::string name) { texName = name; }
		void setVertexCount(int vertexNumber) { vertexCount = vertexNumber; }
		void setVertices(float* verticesArray) { vertices = verticesArray; }
		void setVertexNormals(float* vertexNormalsArray) { vertexNormals = vertexNormalsArray; }
		void setTexCoords(float* texCoordsArray) { texCoords = texCoordsArray; }

	private:
		std::string texName;
		int vertexCount;
		float* vertices;
		float* vertexNormals;
		float* texCoords;
};