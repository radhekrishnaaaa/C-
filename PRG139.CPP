//NRNP: no return with perameter

#include<iostream>
using namespace std;
void dosum(int a,int b) // function defination
{
    cout<<"sum of:"<<(a+b);
}
int main()
{
    int a,b;
    void dosum(int,int);//function declaration

    cout<<"enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;


    dosum(a,b);//function call

    return 0;
}
