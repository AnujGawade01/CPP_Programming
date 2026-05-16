// Here we have displayed single level inheritance with defining the derived class body
#include<iostream>
using namespace std;

class Base
{
    public:
    int i, j;

    Base()
    {
        cout<<"Inside Base Constructor\n";
        i = 0;
        j = 0;
    }

~Base()
{
    cout<<"Inside Base Destructor\n";
}

void fun()
{
    cout<<"Inside Base fun\n";
}
};

class Derived : public Base
{
    public:
    int x;

    Derived()
    {
        cout<<"Inside Derived constructor\n";
        x = 0;
    }

    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }

    void gun()
    {
        cout<<"Inside Derived gun\n";
    }
};

int main()
{
    cout<<"Inside main\n";

    Derived dobj;

    cout<<"size of base class object is : "<<sizeof(Base)<<"\n";    // 8
    cout<<"size of derived class object is : "<<sizeof(Derived)<<"\n";    // 12

    cout<<dobj.i<<"\n";   // 0
    cout<<dobj.j<<"\n";   // 0
    cout<<dobj.x<<"\n";   // 0
    
    return 0;
}
