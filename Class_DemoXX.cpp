#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;                //Characteristics
        float f;              //Characteristics

        void fun()            //Behaviour
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo dobj;

    cout<<dobj.i<<"\n";

    dobj.fun();

    return 0;
}