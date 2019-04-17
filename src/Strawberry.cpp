#include <iostream>
#include "Strawberry.h"

using namespace glm;

Strawberry::Strawberry()
{
    this->currentPos.x = 0.f;
    this->currentPos.z = 0.f;
}


void Strawberry::initObject(glm::vec3 min, glm::vec3 max)
{
	this->bb = new BoundingBox(min, max);

	velocity.x = (rand() / (float) RAND_MAX) * 2;
	velocity.z = (rand() / (float) RAND_MAX) * 2;

	float r = rand() / (float) RAND_MAX;

	currentPos.x =( 1.0f - r) * -150.f + r * 150.f;
	currentPos.z =( 1.0f - r) * -150.f + r * 150.f;

}

void Strawberry::update(float dt)
{
	currentPos += (dt * velocity);
}

bool Strawberry::isCollided(glm::vec3 camera)
{
    return bb->isCollided(camera, currentPos);
}

