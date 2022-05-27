//
// Created by Pixel on 5/27/2022.
//

#ifndef PARTICLEMOVEMENT_STATICSTREAMSTORAGE_H
#define PARTICLEMOVEMENT_STATICSTREAMSTORAGE_H

#include <iostream>

namespace Helpers {
    class StaticStreamStorage {
    public:
        static void configIO(std::istream& in = std::cin, std::ostream& out = std::cout);
    private:
        static std::istream& in;
        static std::ostream& out;
    };
}


#endif //PARTICLEMOVEMENT_STATICSTREAMSTORAGE_H
