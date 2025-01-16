//prg59:A,C,E,G.....n
#include<iostream>
using namespace std;
int main()
{
	char i,n;
	cout<<" enter the n :";
	cin>>n;
	for (i=64;i<=n;i++)
	{
		if(i%2==1)
		{
			cout<<char(i);
		}
	}
	return 0;
}
