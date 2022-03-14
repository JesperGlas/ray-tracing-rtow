#ifndef __VEC3_HPP__
#define __VEC3_HPP__

#include "glm/vec3.hpp"

namespace rt
{
    class vec3 : public glm::vec3
    {
    public:
        vec3() : glm::vec3() {};
        vec3(float v) : glm::vec3(v) {};
    };
}

#endif