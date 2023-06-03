#ifndef LAB5_STACKOVERFLOW_H
#define LAB5_STACKOVERFLOW_H

#include <stdexcept>
#include "StackExceptions.h"
namespace Exception {
    class StackOverflowException : Exception::StackOverFlow {
    public:
        explicit StackOverflowException() : StackOverFlow("Stack is Full") {}

    };
}
#endif
