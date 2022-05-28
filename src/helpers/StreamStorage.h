//
// Created by Pixel on 5/27/2022.
//

#ifndef PARTICLEMOVEMENT_STREAMSTORAGE_H
#define PARTICLEMOVEMENT_STREAMSTORAGE_H

#include <iostream>

namespace Helpers {
    class StreamStorage {
    public:
        StreamStorage(std::istream& in = std::cin, std::ostream& out = std::cout) : in(in), out(out){}

        std::istream &getIn() const;

        std::ostream &getOut() const;

    private:
        std::istream& in;
        std::ostream& out;
    };
}


#endif //PARTICLEMOVEMENT_STREAMSTORAGE_H
