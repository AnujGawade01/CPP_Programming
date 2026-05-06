// Here we redefine the base class methods in derived class
#include<iostream>
using namespace std;

class Base
{
    public :
        int i, j;

        void fun()
        {   cout<<"Inside Base fun\n";   }

        void gun()
        {   cout<<"Inside Base gun\n";   }

        void sun()
        {   cout<<"Inside Base sun\n";   }
        
};   // 8 bytes

class Derived : public Base
{
    public:
        int x, y; 

        void fun()
        {   cout<<"Inside Derive fun\n";   }    // Redifinition

        void sun()
        {   cout<<"Inside Derive sun\n";   }    // Redifinition

        void run()
        {   cout<<"Inside Derive run\n";   }    // Definition
        
};   // 16 bytes

int main()
{
    Base *bp = NULL;

    bp = new Derived();    // Upcasting

    bp->fun();  // Base fun
    bp->gun();  // Base gun
    bp->sun();  // Base sun
    // bp->run();  // Error

    return 0;
}
