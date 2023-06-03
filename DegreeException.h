#ifndef LAB5_Degree_H
#define LAB5_Degree_H
#include <string>
#include <exception>

using namespace std;

namespace Exceptions {
    class ExceptionDegree : public exception {
    public:
        ExceptionDegree(const string& message) : message{ message } {}

        const char* what() const noexcept override {
            return message.c_str();
        }

    private:
        string message;
    };
}
#endif