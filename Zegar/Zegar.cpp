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

float aspect = 1; //Stosunek szerokoœci do wysokoœci okna

				  //Uchwyty na shadery
/*Shader* shaderProgram = config::defaultShader;*/ //WskaŸnik na obiekt reprezentuj¹cy program cieniuj¹cy.
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

//Procedura obs³ugi b³êdów
void error_callback(int error, const char* description) {
	fputs(description, stderr);
}

//Procedura obs³ugi klawiatury
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

//Procedura ob³ugi zmiany rozmiaru bufora ramki
void windowResize(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height); //Obraz ma byæ generowany w oknie o tej rozdzielczoœci
	if (height != 0) {
		aspect = (float)width / (float)height; //Stosunek szerokoœci do wysokoœci okna
	}
	else {
		aspect = 1;
	}
}

//Procedura inicjuj¹ca
void initOpenGLProgram(GLFWwindow* window) {
	//************Tutaj umieszczaj kod, który nale¿y wykonaæ raz, na pocz¹tku programu************
	glClearColor(0, 0.05, 0.2, 1);
	glEnable(GL_DEPTH_TEST); //W³¹cz u¿ywanie Z-Bufora
	glfwSetKeyCallback(window, key_callback); //Zarejestruj procedurê obs³ugi klawiatury
	glfwSetFramebufferSizeCallback(window, windowResize); //Zarejestruj procedurê obs³ugi zmiany rozmiaru bufora ramki
	glEnable(GL_COLOR_MATERIAL);
}

//Zwolnienie zasobów zajêtych przez program
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

//Procedura rysuj¹ca zawartoœæ sceny
void drawScene(GLFWwindow* window, std::vector<Model*>& models) {
	//************Tutaj umieszczaj kod rysuj¹cy obraz******************l

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Wykonaj czyszczenie bufora kolorów

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

	//Przerzuæ tylny bufor na przedni
	glfwSwapBuffers(window);
}

int main(void) {
	std::vector<Model*> models;
	std::vector<Shader*> shaders;
	std::vector<Texture*> textures;

	GLFWwindow* window; //WskaŸnik na obiekt reprezentuj¹cy okno

	glfwSetErrorCallback(error_callback);//Zarejestruj procedurê obs³ugi b³êdów

	if (!glfwInit()) { //Zainicjuj bibliotekê GLFW
		fprintf(stderr, "Nie mo¿na zainicjowaæ GLFW.\n");
		exit(EXIT_FAILURE);
	}

	window = glfwCreateWindow(500, 500, "OpenGL", NULL, NULL);  //Utwórz okno 500x500 o tytule "OpenGL" i kontekst OpenGL.

	if (!window) { //Je¿eli okna nie uda³o siê utworzyæ, to zamknij program
		fprintf(stderr, "Nie mo¿na utworzyæ okna.\n");
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window); //Od tego momentu kontekst okna staje siê aktywny i polecenia OpenGL bêd¹ dotyczyæ w³aœnie jego.
	glfwSwapInterval(1); //Czekaj na 1 powrót plamki przed pokazaniem ukrytego bufora

	if (glewInit() != GLEW_OK) { //Zainicjuj bibliotekê GLEW
		fprintf(stderr, "Nie mo¿na zainicjowaæ GLEW.\n");
		exit(EXIT_FAILURE);
	}

	initOpenGLProgram(window); //Operacje inicjuj¹ce
	shaders = prepareShaders();
	textures = prepareTextures();
	models = prepareModels(shaders, textures);

	glfwSetTime(0); //Wyzeruj licznik czasu

					//G³ówna pêtla
	while (!glfwWindowShouldClose(window)) { //Tak d³ugo jak okno nie powinno zostaæ zamkniête
		drawScene(window, models); //Wykonaj procedurê rysuj¹c¹
		glfwPollEvents(); //Wykonaj procedury callback w zaleznoœci od zdarzeñ jakie zasz³y.
	}

	freeOpenGLProgram(models, shaders, textures);

	glfwDestroyWindow(window); //Usuñ kontekst OpenGL i okno
	glfwTerminate(); //Zwolnij zasoby zajête przez GLFW
	exit(EXIT_SUCCESS);
}