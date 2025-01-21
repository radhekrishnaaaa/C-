/* prg99:same as prg55  in while total print 2,4,6,8,10=30*/
#include<iostream>
using namespace std;
int main()
{
    int i,t=0;
    i=0;
    while(i<=10)
    {
        cout<<i<<"+";
        t=t+i;
        i+=2;
    }
    cout<<"="<<t;
    return 0;
}
