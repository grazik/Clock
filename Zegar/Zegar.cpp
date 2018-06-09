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


//Uchwyty na VAO i bufory wierzcho�k�w
GLuint vao;
GLuint bufVertices; //Uchwyt na bufor VBO przechowuj�cy tablic� wsp�rz�dnych wierzcho�k�w
GLuint bufNormals; //Uchwyt na bufor VBO przechowuj�cy tablick� wektor�w normalnych

//TeaPot
Gear* gear;
Shader* shader;
Texture* texture;

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

//Tworzy bufor VBO z tablicy
//GLuint makeBuffer(void *data, int vertexCount, int vertexSize) {
//	GLuint handle;
//
//	glGenBuffers(1, &handle);//Wygeneruj uchwyt na Vertex Buffer Object (VBO), kt�ry b�dzie zawiera� tablic� danych
//	glBindBuffer(GL_ARRAY_BUFFER, handle);  //Uaktywnij wygenerowany uchwyt VBO
//	glBufferData(GL_ARRAY_BUFFER, vertexCount*vertexSize, data, GL_STATIC_DRAW);//Wgraj tablic� do VBO
//
//	return handle;
//}

////Przypisuje bufor VBO do atrybutu
//void assignVBOtoAttribute(Shader *shaderProgram, const char* attributeName, GLuint bufVBO, int vertexSize) {
//	GLuint location = shaderProgram->getAttribLocation(attributeName); //Pobierz numer slotu dla atrybutu
//	glBindBuffer(GL_ARRAY_BUFFER, bufVBO);  //Uaktywnij uchwyt VBO
//	glEnableVertexAttribArray(location); //W��cz u�ywanie atrybutu o numerze slotu zapisanym w zmiennej location
//	glVertexAttribPointer(location, vertexSize, GL_FLOAT, GL_FALSE, 0, NULL); //Dane do slotu location maj� by� brane z aktywnego VBO
//}

//Przygotowanie do rysowania pojedynczego obiektu
//void prepareObject(Shader *shaderProgram) {
//	//Zbuduj VBO z danymi obiektu do narysowania
//	bufVertices = Graphics::makeBuffer(vertices, vertexCount, sizeof(float) * 4); //VBO ze wsp�rz�dnymi wierzcho�k�w
//	bufNormals = Graphics::makeBuffer(normals, vertexCount, sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho�k�w
//
//																	 //Zbuduj VAO wi���cy atrybuty z konkretnymi VBO
//	glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej
//
//	glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO
//
//	Graphics::assignVBOtoAttribute(shaderProgram, "vertex", bufVertices, 4); //"vertex" odnosi si� do deklaracji "in vec4 vertex;" w vertex shaderze
//	Graphics::assignVBOtoAttribute(shaderProgram, "normal", bufNormals, 4); //"normal" odnosi si� do deklaracji "in vec4 normal;" w vertex shaderze
//
//	glBindVertexArray(0); //Dezaktywuj VAO
//}

//Procedura inicjuj�ca
void initOpenGLProgram(GLFWwindow* window) {
	//************Tutaj umieszczaj kod, kt�ry nale�y wykona� raz, na pocz�tku programu************
	glClearColor(0, 0.05, 0.2, 1);
	glEnable(GL_DEPTH_TEST); //W��cz u�ywanie Z-Bufora
	glfwSetKeyCallback(window, key_callback); //Zarejestruj procedur� obs�ugi klawiatury
	glfwSetFramebufferSizeCallback(window, windowResize); //Zarejestruj procedur� obs�ugi zmiany rozmiaru bufora ramki

	//shaderProgram = new Shader("shaders/vertex.vs", "", "shaders/fragment.fs"); //Wczytaj program cieniuj�cy
	shader = new Shader("Shaders/vertex.vs", "", "Shaders/fragment.fs");
	texture = new Texture("Textures/gold.png");
	gear = new Gear(shader, texture);
	gear->prepareObject();
}

//Zwolnienie zasob�w zaj�tych przez program
void freeOpenGLProgram() {
	//delete config::defaultShader; //Usuni�cie programu cieniuj�cego

	glDeleteVertexArrays(1, &vao); //Usuni�cie vao
	glDeleteBuffers(1, &bufVertices); //Usuni�cie VBO z wierzcho�kami
	glDeleteBuffers(1, &bufNormals); //Usuni�cie VBO z wektorami normalnymi
}

//Procedura rysuj�ca zawarto�� sceny
void drawScene(GLFWwindow* window) {
	//************Tutaj umieszczaj kod rysuj�cy obraz******************l

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Wykonaj czyszczenie bufora kolor�w

	glm::mat4 P = glm::perspective(50 * 3.1415f / 180, aspect, 1.0f, 50.0f); //Wylicz macierz rzutowania

	glm::mat4 V = glm::lookAt( //Wylicz macierz widoku
		camera->getPosition(),
		glm::vec3(cos(3.14*camera->getRotationAngle() / 180), 0, sin(3.14*camera->getRotationAngle() / 180)) + camera->getPosition(),
		glm::vec3(0.0f, 1.0f, 0.0f));


	//Wylicz macierz modelu rysowanego obiektu
	glm::mat4 M = glm::mat4(1.0f);
	M = glm::rotate(M, 3.14f*90/180, glm::vec3(1, 0, 0));
	M = glm::rotate(M, 3.14f * 90 / 180, glm::vec3(0, 0, 1));
	M = glm::rotate(M, 3.14f * gear->getAngke() / 180, glm::vec3(0, 1, 0));
	
	if (glfwGetTime() >= 1) {
		gear->updateAngle(5.0f);
		glfwSetTime(0); //Wyzeruj licznik czasu
	}
	

	gear->drawObject(P, V, M);
	std::cout << glfwGetTime() << '\n';

	//Przerzu� tylny bufor na przedni
	glfwSwapBuffers(window);
}



int main(void)
{
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

	glfwSetTime(0); //Wyzeruj licznik czasu

					//G��wna p�tla
	while (!glfwWindowShouldClose(window)) { //Tak d�ugo jak okno nie powinno zosta� zamkni�te
		// angle_x += speed_x * glfwGetTime(); //Zwi�ksz k�t o pr�dko�� k�tow� razy czas jaki up�yn�� od poprzedniej klatki
		drawScene(window); //Wykonaj procedur� rysuj�c�
		glfwPollEvents(); //Wykonaj procedury callback w zalezno�ci od zdarze� jakie zasz�y.
	}

	freeOpenGLProgram();

	glfwDestroyWindow(window); //Usu� kontekst OpenGL i okno
	glfwTerminate(); //Zwolnij zasoby zaj�te przez GLFW
	exit(EXIT_SUCCESS);
}