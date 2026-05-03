#include<iostream>
using namespace std;

class Marvellous
{
    //Access Specifier (By default it is private)
    public:
    int No1, No2;   //Characteristics

    void fun()     //Behaviour
    {
        cout<<"Inside Fun\n";
    }

    void gun()     //Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    //Object creation(Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8

    cout<<mobj1.No1<<"\n";

    mobj1.fun();
    mobj2.fun();

    mobj1.Gun();

    return 0;
}