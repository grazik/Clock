#include "Classes/headers/Camera.h"

Camera::Camera()
	:position(glm::vec3(0.0f, 0.0f, 0.0f)),
	angle(0.0f)
{};

Camera::Camera(float x, float y, float z)
	:position(glm::vec3(x, y, z)),
	angle(0.0f)
{};

Camera::Camera(float x, float y, float z, float newAngle)
	:position(glm::vec3(x, y, z)),
	angle(newAngle)
{};