// Here we overload function by changing the number of parameters
#include<iostream>
using namespace std;

class Hello
{
    public:
    int Addition(int a, int b)   //Addition@2ii
    {
        return a+b;
        
    }
    int Addition(int a, int b, int c)   //Addition@3iii
    {
        return a+b+c;
    }
    int Addition(int a, int b, int c, int d) //Addition@4iiii
    {
        return a+b+c+d;
    }
};

int main()
{
    Hello hobj;
    cout<<hobj.Addition(10,20)<<"\n";
    cout<<hobj.Addition(10,20,20)<<"\n";
    cout<<hobj.Addition(10,20,30,40)<<"\n";

    return 0;
}

