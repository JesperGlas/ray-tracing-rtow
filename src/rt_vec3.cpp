#include "rt_vec3.hpp"

/* Constructors */

rt::vec3::vec3() : glm::vec3() { }
rt::vec3::vec3(float v) : glm::vec3(v) { };
rt::vec3::vec3(float x, float y, float z) : glm::vec3(x, y, z) { };

/* Public */

float rt::vec3::length_squared() const
{
    return (this->x * this->x) + (this->y * this->y) + (this->z * this->z);
}

float rt::vec3::length() const
{
    return this->length_squared();
}