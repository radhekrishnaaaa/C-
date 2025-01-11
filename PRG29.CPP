//prg29:marks count on condition
#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	float per,total;
	cout<<"\nenter the marks m1,m2,m3";
	cin>>m1;
	cin>>m2;
	cin>>m3;
	total=m1+m2+m3;
	cout<<"\n total="<<total;
	per=total/300*100;
	cout<<"\n per="<<per;
	if(per>75)
	{
		cout<<"\n grade A";
	}
	else
	{
		if(per>60 && per<=75)
		{
			cout<<"\n grade B";
		}
		else
		{
			if(per>45 && per<=60)
			{
				cout<<"\n grade C";
			}
			else
			{
				if(per>=35 && per<=45)
				{
					cout<<"\n grade D";
				}
				else
				{
					//if(per<35)
					//{
						cout<<"\n fail";
					//}
				}
			}
		}
	}
	return 0;

}
