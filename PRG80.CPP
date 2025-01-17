/*prg80:A
        bc
        DEF
        ghij
        KLMNO*/
#include<iostream>
using namespace std;
int main()
{
    int  i,j,a=65;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
        for(j=1;j<=i;j++)
        {
            cout<<char(a);
            a++;
        }
        }
        else
        {
            for(j=1;j<=i;j++)
        {
            cout<<char(a+32);
            a++;
        }

        }
        cout<<"\n";
    }
    return 0;
}
