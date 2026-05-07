// Here we create pure virtual method Sub in Base class and then give its definition in Derived class
#include<iostream> 
using namespace std;

class Base
{
    public:
    int i, j;

    int Add(int a, int b)
    {
        return a+b;
    }

    virtual int Sub(int a, int b) = 0;
};

class Derived : public Base
{
    public:
    int x, y;

    int Mult(int a, int b)
    {
        return a*b;
    }

    int Sub(int a, int b)
    {
        
        return b-a;
    }
};

int main()
{
    //Base bobj; // Error as it is a abstract function as it contains one pure virtual function
    Derived dobj;
    cout<<sizeof(Derived)<<"\n";    // 20

    return 0;
}
