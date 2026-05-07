// Here we check the size of Base & Derived class both have same method as derived class redefines base class method
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
    cout<<sizeof(Base)<<"\n";       // 8 
    cout<<sizeof(Derived)<<"\n";        // 16

    return 0;
}
