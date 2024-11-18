#include "cl_args.h"

ClArgsKeeper::ClArgsKeeper(const int& argc, char* argv[]) {
    for(int i = 1; i < argc;) {
        //we try to extract pairs key-value
        std::string key = argv[i++];
        auto origValue = argv[i++];
        if (origValue == nullptr) {
            break; 
        }
        std::string value = origValue;
        if (params.find(key) != params.end()) {
            params[key] = value; 
        }
    }
}

std::string ClArgsKeeper::port() {
    return params[PORT_PARAM];
}
