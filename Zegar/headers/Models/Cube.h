#pragma once

#include "Model.h"

namespace Models {
	namespace CubeInternal {
		extern float vertices[];
		extern float normals[];
		extern float vertexNormals[];
		extern float texCoords[];
		extern float colors[];
		extern unsigned int vertexCount;
	}

	class Cube : public Model {
	public:
		Cube();
		virtual ~Cube();
		virtual void drawSolid();
	};

	extern Cube cube;
}