//function//
//inbulit
//len==strlen(str)
//retyrn  parameter/argument
/*
-----------------------------------
    with        with
    with        no
    no          with
    no          no
------------------------------------
*/
//NRNP: no return no perameter

#include<iostream>
using namespace std;
void dosum() // function defination
{
    int a,b;

    cout<<"enter the a:";
    cin>>a;

    cout<<"enter the b:";
    cin>>b;

    cout<<"sum of:"<<(a+b);
}
int main()
{
    void dosum();//function declaration

    dosum();//function call

    return 0;
}
