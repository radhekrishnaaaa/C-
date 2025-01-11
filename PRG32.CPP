//prg32:else if
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c=30;
    if(a>b && a>c)
    {
        cout<<"\n a is max";
    }
    else if(b>c)
    {
        cout<<"\n b is max";
    }
    else
    {
        cout<<"\n c is max";
    }
    return 0;
}
