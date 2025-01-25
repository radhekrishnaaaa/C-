/// getter setter use
//return 1 time in function
//addition substraction maltiflication devision
#include<iostream>
using namespace std;
class Arith //class
{
    int a=10,b=20; //defult private
    public: //access specifier
    void setdata() //setter
    {
        cout<<"enter a";
        cin>>a;
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
    int dosub()
    {
        return get_a()-get_b();
    }
    int domal()
    {
        return get_a()*get_b();
    }
    int dodiv()
    {
        return get_a()/get_b();
    }

};
int main()
{
    Arith prb1;// class object
    prb1.setdata();
    cout<<"\n a  :"<<prb1.get_a();
    cout<<"\n b  :"<<prb1.get_b();
    cout<<"\n sum:"<<prb1.dosum();
    cout<<"\n a  :"<<prb1.get_a();
    cout<<"\n b  :"<<prb1.get_b();
    cout<<"\n sub:"<<prb1.dosub();
    cout<<"\n a  :"<<prb1.get_a();
    cout<<"\n b  :"<<prb1.get_b();
    cout<<"\n mal:"<<prb1.domal();
    cout<<"\n a  :"<<prb1.get_a();
    cout<<"\n b  :"<<prb1.get_b();
    cout<<"\n div:"<<prb1.dodiv();
    return 0;
}

