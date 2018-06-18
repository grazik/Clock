#include <iostream>
#include <cmath>
#define GLEW_STATIC
#include <GL/glew.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Classes/headers/Shader.h"
#include "Classes/headers/Camera.h"
#include "Models/AllModels.h"
#include "Classes/headers/Texture.h"
#include "config.h"

#include "Classes/headers/Graphics.h"

float aspect = 1; //Stosunek szeroko�ci do wysoko�ci okna

				  //Uchwyty na shadery
/*Shader* shaderProgram = config::defaultShader;*/ //Wska�nik na obiekt reprezentuj�cy program cieniuj�cy.
Camera* camera = new Camera(config::cameraX, config::cameraY, config::cameraZ);

std::vector<Shader*> prepareShaders() {
	std::vector<Shader*> shaders;

	shaders.push_back(new Shader("shaders/vertex.vs", "", "shaders/fragment.fs"));
	
	return shaders;
}

std::vector<Texture*> prepareTextures() {
	std::vector<Texture*> textures;

	textures.push_back(new Texture("Textures/gold.png"));
	textures.push_back(new Texture("Textures/brushed-metal.png"));
	
	return textures;
}

std::vector<Model*> prepareModels(std::vector<Shader*> shaders, std::vector<Texture*> textures) {
	std::vector<Model*> models;

	models.push_back(new Gear(shaders[0], textures[1], glm::vec3(0,0,-0.5f), 1.0f, 30.0f));
	models.push_back(new Gear(shaders[0], textures[1], glm::vec3(0, 0, 0.5f), 1.2f, 0.0f));
	models.push_back(new Pendulum(shaders[0], textures[1], glm::vec3(-0.2, 0, 0), 30.0f));

	return models;
}

//Procedura obs�ugi b��d�w
void error_callback(int error, const char* description) {
	fputs(description, stderr);
}

//Procedura obs�ugi klawiatury
void key_callback(GLFWwindow* window, int key,
	int scancode, int action, int mods) {
	if (action == GLFW_PRESS || action == GLFW_REPEAT) {
		if (key == GLFW_KEY_LEFT) camera->updateRotationAngle(-1 * config::cameraRotationAngleChange);
		if (key == GLFW_KEY_RIGHT) camera->updateRotationAngle(config::cameraRotationAngleChange);
		if (key == GLFW_KEY_UP) {
			camera->updateMoveAngle(config::cameraMoveAngleChange);
			camera->updatePostion(cos(3.14f * camera->getRotationAngle() / 180), config::cameraMoveFactor * sin(camera->getMoveAngle() * 3.14 / 180), sin(3.14f * camera->getRotationAngle() / 180));
		}
		if (key == GLFW_KEY_DOWN) {
			camera->updateMoveAngle(-config::cameraMoveAngleChange);
			camera->updatePostion(-cos(3.14f * camera->getRotationAngle() / 180), -config::cameraMoveFactor * sin(camera->getMoveAngle() * 3.14 / 180), -sin(3.14f * camera->getRotationAngle() / 180));
		}
	}
}

//Procedura ob�ugi zmiany rozmiaru bufora ramki
void windowResize(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height); //Obraz ma by� generowany w oknie o tej rozdzielczo�ci
	if (height != 0) {
		aspect = (float)width / (float)height; //Stosunek szeroko�ci do wysoko�ci okna
	}
	else {
		aspect = 1;
	}
}

//Procedura inicjuj�ca
void initOpenGLProgram(GLFWwindow* window) {
	//************Tutaj umieszczaj kod, kt�ry nale�y wykona� raz, na pocz�tku programu************
	glClearColor(0, 0.05, 0.2, 1);
	glEnable(GL_DEPTH_TEST); //W��cz u�ywanie Z-Bufora
	glfwSetKeyCallback(window, key_callback); //Zarejestruj procedur� obs�ugi klawiatury
	glfwSetFramebufferSizeCallback(window, windowResize); //Zarejestruj procedur� obs�ugi zmiany rozmiaru bufora ramki
	glEnable(GL_COLOR_MATERIAL);
}

//Zwolnienie zasob�w zaj�tych przez program
void freeOpenGLProgram(std::vector<Model*>& models, std::vector<Shader*>& shaders, std::vector<Texture*>& textures) {
	for (int i = 0; i < models.size(); i++) {
		delete models[i];
	}

	for (int i = 0; i < shaders.size(); i++) {
		delete shaders[i];
	}

	for (int i = 0; i < textures.size(); i++) {
		delete textures[i];
	}

	models.clear();
	shaders.clear();
	textures.clear();
}

//Procedura rysuj�ca zawarto�� sceny
void drawScene(GLFWwindow* window, std::vector<Model*>& models) {
	//************Tutaj umieszczaj kod rysuj�cy obraz******************l

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Wykonaj czyszczenie bufora kolor�w

	glm::mat4 P = glm::perspective(50 * 3.1415f / 180, aspect, 1.0f, 50.0f); //Wylicz macierz rzutowania

	glm::mat4 V = glm::lookAt( //Wylicz macierz widoku
		camera->getPosition(),
		glm::vec3(cos(3.14*camera->getRotationAngle() / 180), 0, sin(3.14*camera->getRotationAngle() / 180)) + camera->getPosition(),
		glm::vec3(0.0f, 1.0f, 0.0f));

	if (glfwGetTime() >= 1) {
		models[0]->updateAngle(5.0f);
		models[1]->updateAngle(-5.0f);
		models[2]->changeDirection();
		glfwSetTime(0); //Wyzeruj licznik czasu
	}
	
	for (int i = 0; i < models.size(); i++) {
		models[i]->drawObject(P, V);
	}

	//Przerzu� tylny bufor na przedni
	glfwSwapBuffers(window);
}

int main(void) {
	std::vector<Model*> models;
	std::vector<Shader*> shaders;
	std::vector<Texture*> textures;

	GLFWwindow* window; //Wska�nik na obiekt reprezentuj�cy okno

	glfwSetErrorCallback(error_callback);//Zarejestruj procedur� obs�ugi b��d�w

	if (!glfwInit()) { //Zainicjuj bibliotek� GLFW
		fprintf(stderr, "Nie mo�na zainicjowa� GLFW.\n");
		exit(EXIT_FAILURE);
	}

	window = glfwCreateWindow(500, 500, "OpenGL", NULL, NULL);  //Utw�rz okno 500x500 o tytule "OpenGL" i kontekst OpenGL.

	if (!window) { //Je�eli okna nie uda�o si� utworzy�, to zamknij program
		fprintf(stderr, "Nie mo�na utworzy� okna.\n");
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window); //Od tego momentu kontekst okna staje si� aktywny i polecenia OpenGL b�d� dotyczy� w�a�nie jego.
	glfwSwapInterval(1); //Czekaj na 1 powr�t plamki przed pokazaniem ukrytego bufora

	if (glewInit() != GLEW_OK) { //Zainicjuj bibliotek� GLEW
		fprintf(stderr, "Nie mo�na zainicjowa� GLEW.\n");
		exit(EXIT_FAILURE);
	}

	initOpenGLProgram(window); //Operacje inicjuj�ce
	shaders = prepareShaders();
	textures = prepareTextures();
	models = prepareModels(shaders, textures);

	glfwSetTime(0); //Wyzeruj licznik czasu

					//G��wna p�tla
	while (!glfwWindowShouldClose(window)) { //Tak d�ugo jak okno nie powinno zosta� zamkni�te
		drawScene(window, models); //Wykonaj procedur� rysuj�c�
		glfwPollEvents(); //Wykonaj procedury callback w zalezno�ci od zdarze� jakie zasz�y.
	}

	freeOpenGLProgram(models, shaders, textures);

	glfwDestroyWindow(window); //Usu� kontekst OpenGL i okno
	glfwTerminate(); //Zwolnij zasoby zaj�te przez GLFW
	exit(EXIT_SUCCESS);
}