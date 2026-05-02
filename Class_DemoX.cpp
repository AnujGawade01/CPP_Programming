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

    cout<<sizeof(dobj)<<"\n";         // 8

    return 0;
}