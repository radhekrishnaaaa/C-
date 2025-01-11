//prg23: positiv or nagtive
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\nenter a:";
	cin>>a;
	if(a>=0)
	{
		if(a==0)
		{
		cout<<"\n a"<<a<<"is zero ";
		}
		else
		{
		cout<<"\n a"<<a<<"is positive";
		}
	}
	else
	{
		cout<<"\n a"<<a<<"is nagitive";
	}
	return 0;
}
