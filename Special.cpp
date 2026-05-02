// Here we use the special functions constructor and destructor
#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;                //Characteristics
        float f;              //Characteristics

        Demo()                //Constructor
        {
            cout<<"Inside constructor\n";
            i = 0;
            f = 0.0f;
        }

        ~Demo()               //Destructor
        {
            cout<<"Inside destructor\n";
        }

        void fun()            //Behaviour
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    Demo dobj;                //Object Creation

    cout<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of main\n";

    return 0;
}
