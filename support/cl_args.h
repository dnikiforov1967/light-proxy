#ifndef __CL_ARGS__
#define __CL_ARGS__

#include <boost/program_options.hpp>

namespace po = boost::program_options;

//TODO think how to get rid of boost - specific members    
class ClArgsParser {
    po::options_description network_options;
    int port_number;
    po::variables_map vm;
    public:
        ClArgsParser(const ClArgsParser&)=delete;
        ClArgsParser(const int& argc, char**);
        int port();
        bool help();
};

#endif

