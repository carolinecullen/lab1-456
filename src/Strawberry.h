#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include "Shape.h"
#include "GameObject.h"

using namespace std;

class Strawberry : public GameObject
{

public:

	glm::vec3 velocity;
	void initObject(glm::vec3, glm::vec3);
	void update(float);
	bool isCollided(glm::vec3);

	Strawberry();
	virtual ~Strawberry() {};

private:


};

#endif