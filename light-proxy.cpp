#include <iostream>
#include "./support/cl_args.h"
#include "./top/server.h"

int main(int argc, char* argv[]) {
    Server server;
    auto result = server.init(argc, argv);
    if (result == 0) {
        std::cout << "start" <<std::endl;
    }
    return 0;
}
