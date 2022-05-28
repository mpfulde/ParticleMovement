#include "StreamStorage.h"

int main() {

    Helpers::StreamStorage sstorage;

    sstorage.getOut() << "Hello, World!" << std::endl;
    return 0;
}
