//prg47:enter n print odd no.up to 50 aeki
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=50;i++)//(i=1;i<=50;i+=2)
	{
		if(i%2==1)
		{
		cout<<"\n \t"<<i;
		}
	}
	return 0;
}
