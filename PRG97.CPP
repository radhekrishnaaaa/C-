/* prg97:same as prg53  in while total print 1,2,3,4,5..10=55*/
#include<iostream>
using namespace std;
int main()
{
    int i,t=0;
    i=1;
    while(i<=10)
    {
        cout<<i<<"+";
        t=t+i;

        i++;
    }
    cout<<"="<<t;
    return 0;
}
