// Here we implement all three types of constructor in cpp
#include<iostream>
using namespace std;

class Marvellous
{
    // Access Specifier (By default it is private)
    public:
    int No1, No2;   // Characteristics

    // Default Constructor
    Marvellous()
    {
        cout<<"Inside default constructor\n";
        No1 = 0; 
        No2 = 0;
    }

    // Parameterized Constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside parameterized constructor\n";
        No1 = A; 
        No2 = B;
    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    ~Marvellous()
    {
        cout<<"Inside destructor\n";

    }
};


int main()
{
    cout<<"Inside main\n";

    Marvellous mobj1;         // Default Constructor
    Marvellous mobj2(11,21);    // Parameterized Constructor
    Marvellous mobj3(mobj2);    // Copy Constructor

    cout<<"End of main\n";

    return 0;
}       // All destructors gets called
