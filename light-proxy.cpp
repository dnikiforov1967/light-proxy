#include <iostream>
#include "./support/cl_args.h"

int main(int argc, char* argv[]) {
    int portNumber = 0;

    //we don't need permanent param parser & storage so far
    {
        ClArgsParser parser(argc, argv);
        //if someone specifies --help, do nothing except for help
        if (parser.help()) {
            return 0;
        }
        portNumber = parser.port();
    }

    std::cout << "Program listen port " << portNumber << std::endl;
    return 0;
}
