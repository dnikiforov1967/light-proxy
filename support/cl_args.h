#ifndef CL_ARGS_H
#define CL_ARGS_H

#include "map"
    
class ClArgsKeeper {
    const std::string PORT_PARAM = "--port";
    std::map<std::string, std::string> params = {{PORT_PARAM, "8088"}};
    public:
        ClArgsKeeper(const int& argc, char* argv[]);
        std::string port();
};

#endif

