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
        Coordinate() = delete;
        Coordinate(int x, int y);

        const value_type & getX() const;
        const value_type & getY() const;

    private:
        value_type x;
        value_type y;
    };

    const Coordinate o_coord(0, 0);
}


#endif //PARTICLEMOVEMENT_COORDINATE_H
