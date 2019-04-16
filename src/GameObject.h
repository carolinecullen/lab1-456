#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <vector>
#include <glm.hpp>

class GameObject
{

public:


    virtual void initObject() = 0;
    virtual void update(float) = 0;

    glm::vec3 currentPos;


    GameObject() {};
    virtual ~GameObject() {};

private:


};

#endif