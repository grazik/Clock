#pragma once

#include <vector>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>

namespace Models {

	class Model {
	public:
		int vertexCount;
		float* vertices;
		float* normals;
		float* vertexNormals;
		float* texCoords;
		float* colors;

		virtual void drawSolid() = 0;
		virtual void drawWire();
	};
}