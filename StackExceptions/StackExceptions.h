#ifndef LAB_5_OP_H
#define LAB_5_OP_H

#include <stdexcept>

namespace Exception {
    class StackExceptions : public std::logic_error {
    public:
        explicit StackExceptions(const char* message) :std::logic_error(message) {}

    };
    class StackOverFlow : public std::runtime_error {
    public:
        StackOverFlow(const std::string & message)
            : std::runtime_error(message) {}
    };
}





#endif
