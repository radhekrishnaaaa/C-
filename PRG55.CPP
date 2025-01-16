//prg55:1,4,9,16.....n
#include<iostream>
using namespace std;
int main()
{
	int i,n,a;
	cout<<"\n enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=i*i;
		cout<<"\t"<<a<<"\t";
	}
	return 0;
}
