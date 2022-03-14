#ifndef __RAYTRACER_HPP__
#define __RAYTRACER_HPP__

#include <iostream>

namespace rt {

    struct RTContext
    {
        int max_bounces {10};
    };

    void render(RTContext &rtx);
}

#endif