//prg56: 1,4,3,16,5....n
#include<iostream>
using namespace std;
int main()
{
	int i,n,a;
	cout<<"\n enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		a=i*i;
		cout<<"\t"<<a<<"\t";
		}
		else
		{
		cout<<"\t"<<i<<"\t";
		}
	}
	return 0;
}
