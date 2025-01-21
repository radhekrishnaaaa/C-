/* prg98:same as prg54 in do..while 1,3,5,7,9=25 */
#include<iostream>
using namespace std;
int main()
{
    int i,t=0;
    i=1;
    do
    {
        cout<<i<<"+";
        t=t+i;
        i+=2;
    } while(i<=10);
    cout<<"="<<t;
    return 0;
}
