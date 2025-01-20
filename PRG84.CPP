/*prg84:1
        01
        010
        1010
        10101*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,a=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a==0)
            {
                cout<<(a+1);
                a++;
            }
            else
            {
                cout<<(a-1);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}
