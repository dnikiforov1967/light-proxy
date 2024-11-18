#ifndef __CL_ARGS__
#define __CL_ARGS__

#include <boost/program_options.hpp>

namespace po = boost::program_options;
    
class ClArgsParser {
    po::options_description network_options;
    int port_number;
    po::variables_map vm;
    public:
        ClArgsParser(const ClArgsParser&)=delete;
        ClArgsParser(const int& argc, char* argv[]);
        int port();
        bool help();
        //we don't need destructor
};

#endif

