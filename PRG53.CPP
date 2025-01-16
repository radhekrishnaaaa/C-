//prg53:total 2,4,6,8,10=30
#include<iostream>
using namespace std;
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++) //(i=0;i<=50;i+=2)
	{
		if(i%2==0)
		{
		cout<<"\n \t "<<i;
		t=t+i;
		}
	}
	cout<<t;
	return 0;
}
