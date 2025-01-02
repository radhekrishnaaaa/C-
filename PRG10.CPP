//prg10:user input
#include<iostream>
using namespace std;
int main()
{
	int a,b;

	cout<<"\n enter a:";
	cin>>a;
	cout<<"\n enter b:";
	cin>>b;
	cout<<"\n value a:"<<a;
    cout<<"\n value b:"<<b;
	cout<<"\n sizeof int:"<<sizeof(int);
	cout<<"\n address a:"<<&a;
    cout<<"\n address b:"<<&b;

	// printf("\n enter a and b:");
	// scanf("%d%d",&a,&b);
	// printf("\n value a:%d\tb:%d",a,b);
	// printf("\n sizeof int:%d",sizeof(int));
	// printf("\n address a:%u\tb:%u",&a,&b);

	return 0;
}

