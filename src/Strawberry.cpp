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

	for(int i = 0; i < 2; i++)
	{
		srand(time(nullptr));
		float r = rand() / (float) RAND_MAX;
		if(i==0)
		{
			currentPos.x =( 1.0f - r) * -512.f + r * -512.f;
		}
		else
        {
			currentPos.z =( 1.0f - r) * -512.f + r * -512.f;
		}

	}


}

void Strawberry::update(float dt)
{

	currentPos += dt * velocity;

}

