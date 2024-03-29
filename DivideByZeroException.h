//Fig.16.1:DivideByZeroException.h
//Class DivideByZeroException definition
#include<stdexcept> //stdexcept header contains runtime_error
using namespace std;

//DivideByZeroException objects should be thrown by functions
//upon detecting division-by-zero exceptions
class DivideByZeroException : public runtime_error
{
public:
    //constructor specifies default error message
    DivideByZeroException():
        runtime_error("attempted to divide by zero") {
        }

};
