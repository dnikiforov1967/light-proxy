#include "server.h"
#include "../support/cl_args.h"

int Server::init(int &argc, char** argv) {
        ClArgsParser parser;
        parser.parse(argc, argv);

        //if someone specifies --help, do nothing except for help
        if (parser.help()) {
            return 1;
        } else {
            port_number = parser.port();
            return 0;
        }
}

