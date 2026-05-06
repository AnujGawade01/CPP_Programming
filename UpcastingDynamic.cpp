#include<iostream>
using namespace std;

class Base
{
    public :
        int i, j;  //8 byte
        
};

class Derived : public Base
{
    public:
        int x, y;  
        //16 byte

};

int main()
{
    Base *bp = NULL;

    bp = new Derived();    // Upcasting

    return 0;
}