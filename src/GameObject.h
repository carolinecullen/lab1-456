#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <vector>
#include <glm.hpp>
#include "BoundingBox.h"

class GameObject
{

public:


    virtual void initObject() = 0;
    virtual void update(float) = 0;

    glm::vec3 currentPos;
    BoundingBox bb;

    GameObject() {};
    virtual ~GameObject() {};

private:


};

#endif