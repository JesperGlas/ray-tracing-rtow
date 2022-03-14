#ifndef __VEC3_HPP__
#define __VEC3_HPP__

#include "glm/vec3.hpp"

namespace rt
{

    class vec3 : public glm::vec3
    {
    public:
        vec3();
        vec3(float v);
        vec3(float x, float y, float z);

        float length_squared() const;
        float length() const;
    };

}

#endif