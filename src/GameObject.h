#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <vector>
#include <glm.hpp>
#include "BoundingBox.h"

class GameObject
{

public:


    virtual void initObject(glm::vec3, glm::vec3) = 0;
    virtual void update(float) = 0;
    virtual bool isCollided(glm::vec3) = 0;

    glm::vec3 currentPos;
    BoundingBox *bb;

    GameObject() {};
    virtual ~GameObject() {};

private:


};

#endif