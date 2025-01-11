//prg38: enter char 'a' is return 'A'
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n enter ch:";
	cin>>ch;
	if(ch>=65 && ch<=90)
	{
		cout<<"\n ans is :"<<(ch+32);
	}
	else if(ch>=97 && ch<=122)
	{
		cout<<"\n ans is :"<<(ch+32);
	}
	return 0;
}
