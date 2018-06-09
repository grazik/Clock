#pragma once
#include "Classes/headers/Graphics.h"

class Texture {
public:
	Texture(std::string path);

	GLuint getHandler() { return handler; }
	
private:
	GLuint handler;
};