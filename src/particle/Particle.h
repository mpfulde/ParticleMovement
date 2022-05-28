//
// Created by Pixel on 5/26/2022.
//

#ifndef PARTICLEMOVEMENT_PARTICLE_H
#define PARTICLEMOVEMENT_PARTICLE_H

#include "StreamStorage.h"
#include "ParticleMovementSystem.h"
#include "ParticleTypeList.h"

namespace Particle {
    class Coordinate;

    class Particle {
        using value_type = value_type;

    public:
        Particle() = delete;
        explicit Particle(Helpers::StreamStorage& sstorage);
        Particle(const Coordinate& c, Helpers::StreamStorage& sstorage);
        Particle(value_type x, value_type y, Helpers::StreamStorage& sstorage);
    private:
        Physics::ParticleMovementSystem system;
        const Coordinate& s_coord;
        Helpers::StreamStorage& s_storage;
    };
}


#include "Coordinate.h"
#include "ConfigurationValidation.h"

#endif //PARTICLEMOVEMENT_PARTICLE_H
