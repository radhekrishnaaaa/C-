/*prg72:1112131415
	2122232425
	3132333435
	4142434445
	5152535455*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,a=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<a<<"\t";
			a++;
		}
	a=a+5;
	cout<<"\n";

	}
	return 0;
}
