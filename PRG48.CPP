//prg48:enter n print even no.up to 50 beki
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=50;i++) //(i=0;i<=50;i+=2)
	{
		if(i%2==0)
		{
		cout<<"\n \t"<<i;
		}
	}
	return 0;
}
