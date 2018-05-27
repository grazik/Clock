#pragma once
#include <gl/glew.h>
#include <iostream>
#include <fstream>
#include <sstream>

class Shader {
private:
	GLuint vertex;
	GLuint geometry;
	GLuint fragment;
	GLuint shaderProgram;
	GLuint loadShader(GLint type, std::string filename);
public:
	Shader(std::string vertexFile, std::string geometryFile, std::string fragmentFile);
	~Shader();
	void use();
	GLuint getUniformLocation(std::string variable);
	GLuint getAttribLocation(std::string variable);
};