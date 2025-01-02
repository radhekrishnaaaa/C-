//prg12:marksheet
#include<iostream>
using namespace std;
int main ()
{
	int m,p,c;
     float total,per;
	cout<<"enter the math ";
	cin>>m;
	cout<<"enter the phsics";
	cin>>p;
	cout<<"enter the chemistry";
	cin>>c;


	total=m+p+c;
	per=(total /300)*100;
	cout<<" total = "<<total;
	cout<<"\nper    = "<<per;
    return 0;
}
