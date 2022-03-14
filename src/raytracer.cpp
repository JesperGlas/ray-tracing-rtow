#include "raytracer.hpp"

/**
 * @brief Function for rendering
 * 
 * @param ctx The context settings
 */
void rt::render(RTContext &rtx)
{
    std::cout << "Render works!" << std::endl;
    std::cout << "Max bounces: " << rtx.max_bounces << std::endl;
}
