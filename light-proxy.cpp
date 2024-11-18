#include "iostream"
#include "memory"
#include "./support/cl_args.h"

int main(int argc, char* argv[]) {
    int portNumber = 0;
    std::cout << "Proxy starting..." << std::endl;
    {
        std::unique_ptr<ClArgsKeeper> keeper_ptr(new ClArgsKeeper(argc, argv));
        portNumber = std::stoi(keeper_ptr.get()->port());
    }
    std::cout << "Listen port " << portNumber << std::endl;
    return 0;
}
