#ifndef BOUNDINGBOX_H
#define BOUNDINGBOX_H

#include <glm.hpp>
#include <stdlib.h>

class BoundingBox
{

public:

    glm::vec3 bbmin;
    glm::vec3 bbmax;

    bool isCollided(glm::vec3 camera, glm::vec3 currentPos)
    {
        glm::vec3 curmin = currentPos + bbmin;
        glm::vec3 curmax = currentPos + bbmax;

        if(!((camera.x > curmin.x) && (camera.x < curmax.x)))
        {
            return false;
        }
        else if(!((camera.z > curmin.z) && (camera.z < curmax.z)))
        {
            return false;
        }
        else
        {
           return true;
        }

    };

    BoundingBox() {};

    BoundingBox(glm::vec3 min, glm::vec3 max)
    {
        bbmin = min;
        bbmax = max;
    };



};

#endif