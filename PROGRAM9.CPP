//function overloading:
#include<iostream>
using namespace std;
class sum
{
    public:
    void dosum(int a,int b)
    {
        cout<<"\n a+b:"<<a+b;
    }
    void dosum(double a,double b)
    {
        cout<<"\n a+b:"<<a+b;
    }
    void dosum(int a,int b,int c)
    {
        cout<<"\n a+b+c:"<<a+b+c;
    }
    double dosum(int a,double b,float c)
    {
        return a+b+c;
    }

};
int main()
{
    sum prb1;
    prb1.dosum(10,20);
    prb1.dosum(10.10,20.20);
    prb1.dosum(10,20,30);
    cout<<"a+b+c:"<<prb1.dosum(10,20.20,30.30);

}
