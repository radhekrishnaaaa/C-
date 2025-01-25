//construsctor overloading:
#include<iostream>
using namespace std;
class sum
{
    public:
    sum(int a,int b)
    {
        cout<<"\n a+b:"<<a+b;
    }
    sum(double a,double b)
    {
        cout<<"\n a+b:"<<a+b;
    }
    sum(int a,int b,int c)
    {
        cout<<"\n a+b+c:"<<a+b+c;
    }
    sum(int a,double b,float c)
    {
        cout<<"\n a+b+c:"<<a+b+c;
    }

};
int main()
{
    sum prb1(10,20),prb2(10.10,20.20),prb3(10,20,30),prb4(10,20.20,30.30);

}
