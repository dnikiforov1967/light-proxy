#ifndef __CL_ARGS__
#define __CL_ARGS__

#include <boost/program_options.hpp>

namespace po = boost::program_options;
    
class ClArgsParser {
    po::options_description network_options;
    const std::string PORT_PARAM = "--port";
    int port_number = 9000;
    po::variables_map vm;
    public:
        ClArgsParser(const int& argc, char* argv[]);
        int port();
        bool help();
        //we don't need destructor
};

#endif

