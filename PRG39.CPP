//prg39:check char is vowel or not
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n enter charactor:";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"\n %c is vowel"<<ch;
	}
	else
	{
		cout<<"\n %c is consonunt"<<ch;
	}
	return 0;

}
