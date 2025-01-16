//prg57:1,2,4,8.....n
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"\n enter n";
	cin>>n;
	for(i=1;i<=n;i*=2)
	{
		cout<<"\t"<<i<<"\t";
	}
	return 0;
}
