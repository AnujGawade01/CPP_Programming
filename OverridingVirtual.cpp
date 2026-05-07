// Here we override Base class normal and virtual methods in Derived class and then call using Base pointer
// We also try to call a virtual method declared & Defined in Derived Class using Base pointer which will give error as no such similar method exist in Base class
#include<iostream>
using namespace std;

class Base
{
    public :
        int i, j;

        void fun()
        {   cout<<"Inside Base fun\n";   }

        virtual void gun()
        {   cout<<"Inside Base gun\n";   }

        virtual void sun()
        {   cout<<"Inside Base sun\n";   }
        
};   // 8 bytes

class Derived : public Base
{
    public:
        int x, y; 

        void fun()
        {   cout<<"Inside Derived fun\n";   }    // Redifinition

        void sun()
        {   cout<<"Inside Derived sun\n";   }    // Redifinition

        virtual void run()
        {   cout<<"Inside Derived run\n";   }    // Definition
        
};   // 16 bytes

int main()
{
    Base *bp = new Derived();   // Upcasting

    bp->fun();  // Base fun
    bp->gun();  // Base gun
    bp->sun();  // Derived sun
    // bp->run();  // Error

    return 0;
}
