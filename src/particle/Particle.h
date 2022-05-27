//
// Created by Pixel on 5/26/2022.
//

#ifndef PARTICLEMOVEMENT_PARTICLE_H
#define PARTICLEMOVEMENT_PARTICLE_H

#include "ParticleMovementSystem.h"
#include "ParticleTypeList.h"

namespace Particle {
    class Coordinate;


    class Particle {
        using value_type = value_type;

    public:
        Particle();
        explicit Particle(const Coordinate& c);
        Particle(value_type x, value_type y);
    private:
        Physics::ParticleMovementSystem& system;
        const Coordinate s_coord;
    };
}


#include "Coordinate.h"

#endif //PARTICLEMOVEMENT_PARTICLE_H
