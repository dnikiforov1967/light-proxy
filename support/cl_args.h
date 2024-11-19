#ifndef __CL_ARGS__
#define __CL_ARGS__

#include <boost/program_options.hpp>

namespace po = boost::program_options;

/**
    Parser of command line, uses boost
**/
class ClArgsParser {
    po::options_description network_options;
    int port_number;
    po::variables_map vm;
    public:
        ClArgsParser(const ClArgsParser&) = delete;
        ClArgsParser();
        void parse(const int&, char**);
        int port();
        bool help();
};

#endif

