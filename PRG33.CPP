//prg33:else if (prg28 charges of units)
#include<iostream>
using namespace std;
int main()
{
	int u;
	float c,total;
	cout<<"\n enter unit:";
	cin>>u;
	if(u>0 && u<=100)
	{
		c=(u*0.60)+50;
		cout<<"\n amount is="<<c;
	}
	else if(u>100 && u<=300)
	{
		c=(u*0.80)+50;
		cout<<"\n amount is="<<c;
	}
	else if(u>300)
	{
		c=(u*0.90)+50;
		cout<<"\n amount is="<<c;
	}

	if(c>=300)
	{
		total=c*1.15;
		cout<<"\n amount after 300 rupess up="<<total;
	}

	return 0;
}
