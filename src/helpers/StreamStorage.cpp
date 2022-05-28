//
// Created by Pixel on 5/27/2022.
//

#include "StreamStorage.h"

std::istream &Helpers::StreamStorage::getIn() const {
    return in;
}

std::ostream &Helpers::StreamStorage::getOut() const {
    return out;
}
