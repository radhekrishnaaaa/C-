//prg51:total1,2,3....10=55
#include<iostream>
using namespace std;
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++)
	{
		cout<<i;
		t=t+i;
	}
	cout<<"="<<t;
	return 0;
}
