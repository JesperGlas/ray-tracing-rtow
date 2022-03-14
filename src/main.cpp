#include "raytracer.hpp"

// Struct to hold context settings
struct Context
{
    const int width = 256;
    const int height = 256;
    rt::RTContext rtx;
} ctx;

int main()
{
    rt::render(ctx.rtx);
}