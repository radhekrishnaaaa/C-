/* prg100:same as prg56 in do..while 5*1=5
                                     5*2=10.... */
#include<iostream>
using namespace std;
int main()
{
    int i,a,n;
    cout<<"\n enter the number";
    cin>>n;
    i=1;
    do
    {
        a=n*i;
        cout<<n<<" X "<<i<<" = "<<a<<"\n";
        i++;
    } while(i<=10);
    return 0;
}
