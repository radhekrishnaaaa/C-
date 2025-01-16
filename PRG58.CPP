//prg58:1,4,12,32,80....n
#include<iostream>
using namespace std;
int main()
{
	int i,n,a,j=1;
	cout<<"\n enter n";
	cin>>n;
	for(i=1;i<=n;i*=2)
	{
		a=i*j;
		cout<<"\t"<<a<<"\t";
		j++;
	}
	return 0;
}
