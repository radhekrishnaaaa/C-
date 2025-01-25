#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    Arith()// defult constructor
    {
        cout<<"in defult constructor call";
    }
    Arith(int x,int y)
    {
        a=x;
        b=y;
    }
     int get_a() //getter
    {
        return a;
    }
    int get_b() //getter
    {
        return b;
    }
};
int main()
{
    // Arith obj1,obj2;  multipal object create kari sakiye
    Arith obj1(10,20),obj2(30,40);
    cout<<"\n obj1 a  :"<<obj1.get_a();
    cout<<"\t b  :"<<obj1.get_b();
    cout<<"\n obj2 a  :"<<obj2.get_a();
    cout<<"\t b  :"<<obj2.get_b();
    return 0;
}

