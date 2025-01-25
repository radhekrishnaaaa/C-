//class in access specifiers
//program1
#include<iostream>
using namespace std;
class Arith //class
{
    int a=10,b=20; //defult private
    public: //access specifier
    void dosum()
    {
        cout<<"\n a+b: "<<a+b;
    }

};
int main()
{
    Arith prb1;// class object
    prb1.dosum();
    return 0;
}


// complie : gcc program1.cpp -lstdc++ -o program1
// run: ./program1

