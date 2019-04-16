#include <iostream>
#include "Strawberry.h"

using namespace glm;

Strawberry::Strawberry()
{
    this->currentPos.x = 0.f;
    this->currentPos.z = 0.f;

    this->bb = new BoundingBox();
}


void Strawberry::initObject()
{
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

