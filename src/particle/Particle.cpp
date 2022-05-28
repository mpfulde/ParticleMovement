//
// Created by Pixel on 5/26/2022.
//

#include "Particle.h"

Particle::Particle::Particle(Helpers::StreamStorage &sstorage) : Particle(o_coord, sstorage) {

}

Particle::Particle::Particle(const Coordinate &c, Helpers::StreamStorage &sstorage) : s_coord(c), s_storage(sstorage) {
}

Particle::Particle::Particle(Particle::value_type x, Particle::value_type y, Helpers::StreamStorage &sstorage) : Particle(Coordinate(x, y), sstorage){

}
