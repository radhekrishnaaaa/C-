//prg24:three value enter and maximum find
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
	if(a>b)
	{
		if(a>c)
		{
		cout<<"\n a"<<a<<" is maximum";
		}
		else
		{
		cout<<"\n c"<<c<<" is maximum";
		}
	}
	else
{
	if(b>c)
	{
		cout<<"\n b"<<b<<" is maximum";
	}

	else
	{
		cout<<"\n c"<<c<<" is maximum";
	}
}
	return 0;
}
