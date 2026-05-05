// Here we create a class and write data & method in it and use the this keyword to call the variables
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i, j;


    Demo(int a, int b)      //    internally(logically transformed) treated as Demo(Demo * this,int a, int b)

    {
        this->i = a;
        this->j = b;
    }

    void Display()          // void Display(Demo * this)
    {
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";

    }
};

int main()
{
    Demo dobj1(10,20);      //&dobj1 = 100
    Demo dobj2(50,60);      //&dobj2 = 200

    dobj1.Display();        //Display(&dobj1); -> Display(100);
    dobj2.Display();        //Display(&dobj2); -> Display(200);

    return 0;
}
