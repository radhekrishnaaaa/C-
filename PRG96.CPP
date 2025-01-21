/* prg96:same as prg52 in do..while A-65 to Z-90*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    i=65;
    do
    {
        cout<<"\n"<<i<<"-"<<char(i);
        i++;
    } while(i<=90);
    return 0;
}
