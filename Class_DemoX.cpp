// Here we create a class that contain both characteristic(data) and behavior(function) and then print it size in main functiion to demonstrate that a function does not get memory allocated in stack
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
