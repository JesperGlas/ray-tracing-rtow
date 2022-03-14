#include <iostream>

#include "glm/glm.hpp"
#include "rt_vec3.hpp"

// Struct to hold context settings
struct Context
{
    const int width = 256;
    const int height = 256;
    rt::vec3 test = rt::vec3(1.f);
} ctx;

int main()
{

    std::cout << "P3\n" << ctx.width << ' ' << ctx.height << "\n255\n";

    for (int y {ctx.height-1}; y >= 0; y--)
    {
        std::cerr << "Scanlines remaining: " << y << " " << std::flush;
        for (int x {ctx.width-1}; x >= 0; x--)
        {
            double r = double(x) / (ctx.width-1);
            double g = double(y) / (ctx.height-1);
            double b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << std::endl;
        }
    }

    std::cerr << "Done!" << std::endl;
}