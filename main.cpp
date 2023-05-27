//Fig.16.2:fig.16.2.cpp
//A simple exception-handling example that checks for
//divide-by-zero exceptions
#include<iostream>
#include"DivideByZeroException.h"
using namespace std;

//perform division and throw DivideByZeroException object
//if divide-by zero exception occurs
double quontient(int numerator, int denominator)
{
    //throw DivideByZeroException if trying to divide by zero
    if(denominator==0)
        throw DivideByZeroException(); //terminate function

    //return division result
    return static_cast<double>(numerator)/denominator;
} //end function quontient

int main()
{
    int number1; //user-specified numerator
    int number2; //user-specified denominator
    double result; //result of division

    cout<<"Enter two integers(end-of-file to end): ";

    //enable user to enter two integers to divide
    while (cin>>number1>>number2)
    {
        //try block contains code that might throw exception
        //and code that will not execute if an exception occurs
        try
        {
            result=quontient(number1, number2);
            cout<<"The quontient is: "<<result<<endl;
        } //end try
        catch (DivideByZeroException &divideByZeroException)
        {
            cout<<"Exception occurred: "
            <<divideByZeroException.what()<<endl;
        } //end catch

        cout<<"Enter two integers(end-of-file to end):";
    } //end while

    cout<<endl;

}
