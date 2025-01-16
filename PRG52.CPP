//prg52:total 1,3,5,7,9=25
#include<iostream>
using namespace std;
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++)//(i=1;i<=50;i+=2)
	{
		if(i%2==1)
		{
		cout<<"\n \t "<<i;
		t=t+i;
		}
	}
	cout<<t;
	return 0;
}
