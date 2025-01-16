 //prg54:enter n=5 print 5*1=5
#include<iostream>
using namespace std;
int main()
{
	int i,n,a;
	cout<<"\n enter n";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		a=n*i;
		cout<<"\n"<<n<<" X "<<i<<" = "<<a;
	}
	return 0;
}
