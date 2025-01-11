//prg34:else if(prg30:salary)
#include<iostream>
using namespace std;
int main()
{
	float sal,gsal,hra,da;
	cout<<"\n enter salary:";
	cin>>sal;
	if(sal<5000)
	{
		hra=sal*8/100;
		da=sal*20/100;
		gsal=sal+hra+da;
		cout<<"\n sal"<<sal<<" is gsal"<<gsal;
	}
	else if(sal>=5000 && sal<10000)
	{
		hra=sal*12/100;
		da=sal*30/100;
		gsal=sal+hra+da;
		cout<<"\n sal"<<sal<<" is gsal"<<gsal;
	}
	else if(sal>=10000 && sal<=15000)
	{
		hra=sal*15/100;
		da=sal*40/100;
		gsal=sal+hra+da;
		cout<<"\n sal"<<sal<<" is gsal"<<gsal;
	}
	else if(sal>=15000)
	{
		hra=sal*20/100;
		da=sal*50/100;
		gsal=sal+hra+da;
		cout<<"\n sal"<<sal<<" is gsal"<<gsal;
	}

	return 0;
}
