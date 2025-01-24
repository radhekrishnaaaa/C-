//NRNP: with return no perameter

#include<iostream>
using namespace std;
int dosum() // function defination
{
    int a,b;

    cout<<"enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;

    cout<<"sum of:";

    return a+b;

}
int main()
{

    int dosum();//function declaration

     // dosum(a,b);//function call

     cout<<dosum();
    return 0;
}
