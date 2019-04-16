#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include "Shape.h"
#include "GameObject.h"

using namespace std;

class Strawberry : public GameObject
{

public:

	glm::vec3 velocity;
	void initObject();
	void update(float);

	Strawberry();
	virtual ~Strawberry() {};

private:


};

#endif