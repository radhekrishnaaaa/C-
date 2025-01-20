/*prg86:while,do..whlie,for*/
#include<iostream>
using namespace std;
int main()
{
    int i,cnt=0;
    i=1;
    //for
    /*for(;i<=5;cnt++) // expresion is not compalesaray
    {
       cout<<i<<"\t";
        i++;
    }
    //whlie
    while(i<=5)
    {
        cout<<i<<"\t";
        i++;
    }*/
    // do...whlie
    do
    {
         cout<<i<<"\t";
        i++;
    }while(i<=5);
    return 0;
}
