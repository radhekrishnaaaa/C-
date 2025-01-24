//NRNP: with return with perameter

#include<iostream>
using namespace std;
int dosum(int a,int b) // function defination
{
    return a+b;
}
int main()
{
    int a,b;
    int dosum(int,int);//function declaration

    cout<<"enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;


   // dosum(a,b);//function call
    cout<<"sum of:"<<dosum(a,b);

    return 0;
}
