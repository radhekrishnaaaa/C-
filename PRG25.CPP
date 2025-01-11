//prg25:three value enter and maximum find using logical operater
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n enter value a:";
	cin>>a;
	cout<<"\n enter value b:";
	cin>>b;
	cout<<"\n enter value c:";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"\n a is greter";
	}
	else
	{
		if(b>c)
		{
			cout<<"\n b is greter";
		}
		else
		{
			cout<<"\n c is greter";
		}
	}
	return 0;
}
