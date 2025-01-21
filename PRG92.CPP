/* prg92:same as prg48 in do..while -n to n*/
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter n";
    cin>>n;
    i=-n;
    do
    {
        cout<<"\n"<<i;
        i++;
    } while(i<=n);
    return 0;
}
