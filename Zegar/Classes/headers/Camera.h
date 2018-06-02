#pragma once

#include <glm/glm.hpp>

class Camera{
public:
	Camera();
	Camera(float x, float y, float z);
	Camera(float x, float y, float z, float newAngle);

	glm::vec3 getPosition() { return position; }
	float const getAngle() { return angle; }

	void setPosition(float x, float y, float z) { position = glm::vec3(x, y, z); }
	void setAngle(float newAngle) { angle = newAngle; }

	void updatePostion(float x, float y, float z) { position = glm::vec3(position.x + x, position.y + y, position.z + z); }
	void updateAngle(float change) { angle += change; }

private:
	glm::vec3 position;
	float angle;
};