#include "Models/Model.h"

void Model::setUniforms() {
	shader->setUnifVec3("directionalLight.direction", glm::vec3(5.0f, 10.0f, 5.0f));
	shader->setUnifVec3("directionalLight.ambient", glm::vec3(0.1f, 0.1f, 0.1f));
	shader->setUnifVec3("directionalLight.diffuse", glm::vec3(0.4));
	shader->setUnifVec3("directionalLight.specular", glm::vec3(0.75f));
}