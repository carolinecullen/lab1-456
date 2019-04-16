#include <iostream>
#include "Strawberry.h"

using namespace glm;

Strawberry::Strawberry()
{
    this->currentPos.x = 0.f;
    this->currentPos.z = 0.f;
}


void Strawberry::initObject()
{
	velocity.x = rand() / (float) RAND_MAX;
	velocity.z = rand() / (float) RAND_MAX;

	float r = rand() / (float) RAND_MAX;
	currentPos.x =( 1.0f - r) * -512.f + r * -512.f;
	currentPos.z =( 1.0f - r) * -512.f + r * -512.f;

}

void Strawberry::update(float dt)
{
	currentPos += (dt * velocity);
}

