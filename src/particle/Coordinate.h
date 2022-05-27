//
// Created by Pixel on 5/26/2022.
//

#ifndef PARTICLEMOVEMENT_COORDINATE_H
#define PARTICLEMOVEMENT_COORDINATE_H

#include "ParticleTypeList.h"

namespace Particle{

    class Coordinate {
    using value_type = value_type;

    public:


        const value_type & getX() const;
        const value_type & getY() const;
    private:
        value_type x;
        value_type y;
    };
}

#endif //PARTICLEMOVEMENT_COORDINATE_H
