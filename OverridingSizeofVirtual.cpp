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
        {   cout<<"Inside Derive fun\n";   }    // Redifinition

        void sun()
        {   cout<<"Inside Derive sun\n";   }    // Redifinition

        virtual void run()
        {   cout<<"Inside Derive run\n";   }    // Definition
        
};   // 16 bytes

int main()
{
    cout<<sizeof(Base)<<"\n";       // 8 
    cout<<sizeof(Derived)<<"\n";        // 16

    return 0;
}