/* 
Created on 12-03-2026
Here i am writing a program to take input from the users and display their addition and multiplication.
I have written both the business login slightly different
For Addition i created a void return type function with output line code inside it
For Multiplication i created a integer type return function as it returns the value of a*b to the caller function
which will be the main function and i wrote the output line inside the main function
*/

#include<iostream>
using namespace std;

class Calculation
{
    public:

    void Add(int a, int b)              // written the return type as int changed it to void
    {
        int Ans = 0;
        Ans = a+b;
        cout<<"Addition result is : "<<Ans<<"\n";

    }

    int Multiply(int a, int b)
    {
        return a*b;
    }

};

int main()
{
    int x, y;
    cout<<"Enter first number : \n";
    cin>> x;                      // I made mistake here by writing "<<" instead of ">>"
    cout<<"Enter second number : \n";
    cin>> y;                      // I made mistake here by writing "<<" instead of ">>"

    Calculation cobj;

    cobj.Add(x,y);

    cout<<"Multiplation result is :"<<cobj.Multiply(x,y)<<"\n";            // did'nt add "<<" before cobj.Multiply

    return 0;
}
