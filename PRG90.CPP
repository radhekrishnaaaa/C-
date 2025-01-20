/* prg90:same as prg46 in do..while 1 to n*/
#include<iostream>
using namespace std;
int main()
{
    int i,n;
     cout<<"enter n";
    cin>>n;
    i=1;
    do
    {
         cout<<"\n"<<i;
        i++;
    } while(i<=n);
    return 0;
}
