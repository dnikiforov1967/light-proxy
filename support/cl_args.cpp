#include "cl_args.h"
#include <iostream>

ClArgsParser::ClArgsParser(const int& argc, char** argv) 
    : network_options("Allowed options"), port_number(9000) {
    network_options.add_options()
    ("help,h", "Show help")
    ("port,p", po::value<int>(&port_number), "Listen port");
    
    po::store(po::parse_command_line(argc, argv, network_options), vm);
    po::notify(vm); 

}

bool ClArgsParser::help() {
    bool is_help = vm.count("help");
    if (is_help) {
        std::cout << network_options << std::endl;
    }
    return is_help;
}

int ClArgsParser::port() {
    return port_number;
}
