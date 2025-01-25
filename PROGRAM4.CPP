#include<iostream>
using namespace std;
class Arith //class
{
    int a,b; //defult private
    public:
    Arith() //defult constructor
    {
        a=0;
        b=0;
    }
    Arith(int x,int y)
    {
        a=x;
        b=y;
    }
    void set_a() //setter
    {
        cout<<"enter a";
        cin>>a;
    }
    void set_b()
    {
        cout<<"enter b";
        cin>>b;
    }
    int get_a() //getter
    {
        return a;
    }
    int get_b() //getter
    {
        return b;
    }
    int dosum()
    {
    //    return  a+b;
        return get_a()+get_b();
    }

};
int main()
{
    //Arith prb1;// class object
    Arith prb1(10,25);
    prb1.set_b();
    cout<<"\n a  :"<<prb1.get_a();
    cout<<"\n b  :"<<prb1.get_b();
    cout<<"\n sum:"<<prb1.dosum();
    return 0;
}

