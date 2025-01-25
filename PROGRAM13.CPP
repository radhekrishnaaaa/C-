// opreater overloading using friend function
// opreater +()
// opreater -()
// opreater *()
// opreater /()
#include<iostream>
using namespace std;

class loc
{
    int longitude,latitude;

    public:

    loc(){}

    loc(int lg,int lt)
    {
        longitude = lg ;
        latitude = lt;

    }

    void show();

   friend loc operator+(loc,loc);
    // friend loc operator-(loc,loc);
    // friend loc operator*(loc,loc);
    // friend loc operator/(loc,loc);
};

void loc :: show()
{
    cout<<"\n longitude :"<<longitude<<"";
    cout<<"\n latitude :"<<latitude<<"\n";
}
loc  operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude= op1.longitude + op2.longitude;
    temp.latitude= op1.latitude + op2.latitude;
    return temp;

}
// loc operator-(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude= op1.longitude - op2.longitude;
//     temp.latitude= op1.latitude - op2.latitude;
//     return temp;
// }

// loc  operator*(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude= op1.longitude * op2.longitude;
//     temp.latitude= op1latitude * op2.latitude;
//     return temp;

// }
// loc  operator/(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude= op1.longitude / op2.longitude;
//     temp.latitude= op1.latitude / op2.latitude;
//     return temp;

// }
int main()
{

    loc obj1(10,20),obj2(5,30),obj3;

    obj1.show();
    obj2.show();

    obj3=obj1+obj2;
    // obj3=obj1-obj2;
    // obj3=obj1*obj2;
    // obj3=obj1/obj2;

    obj3.show();


return 0;
}
