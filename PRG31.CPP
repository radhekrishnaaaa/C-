//prg31:check x and y
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"\n enter x:";
	cin>>x;
	cout<<"\n enter y:";
	cin>>y;
	if(x<2000 || x>3000)
	{
		cout<<"\nx";
	}
	if(y>=100 && y<=500)
	{
		cout<<"\ny";
	}
	return 0;
}
