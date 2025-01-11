//prg40:unary operater
#include<iostream>
using namespace std;
int main()
{
	int a=10,b=10;
	cout<<"\n n1."<<a;
	cout<<"\n n2."<<a++;//post
	cout<<"\n n3."<<a;

	cout<<"\n n1."<<b;
	cout<<"\n n2."<<++b;//pre
	cout<<"\n n3."<<b;
	return 0;
}
