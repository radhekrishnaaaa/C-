//prg60:1,1,2,3,5...n fibo
#include<iostream>
using namespace std;
int main()
{
	int i,a,n=0,n1=1;
	cout<<n<<"\t"<<n1<<"\t";
	for(i=2;i<=10 ;i++)
	{
		a=n+n1;
		cout<<a<<" \t ";
		n=n1;
		n1=a;
	}
	return 0;
}



