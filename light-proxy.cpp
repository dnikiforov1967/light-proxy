#include <iostream>
#include <memory>
#include "./support/cl_args.h"

int main(int argc, char* argv[]) {
    int portNumber = 0;

    //we don't need permanent param parser & storage so far
    {
        auto keeper = new ClArgsParser(argc, argv);
        std::unique_ptr<ClArgsParser> param_uptr(keeper);
        //if someone specifies --help, do nothing except for help
        if (keeper->help()) {
            return 0;
        }
        portNumber = keeper->port();
    }

    std::cout << "Program listen port " << portNumber << std::endl;
    return 0;
}
