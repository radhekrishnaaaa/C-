//prg37:ASCII,char,type conversion
#include<iostream>
using namespace std;
int main()
{
	/*char ch='A',ch1='Z',ch2='a';
	int ch3=122;
	cout<<"\n char :"<<char(ch)<<" - value : "<<char(ch);
	cout<<"\n char :"<<char(ch1)<<" - value :"<<char(ch1);
	cout<<"\n char :"<<char(ch2)<<" - value :"<<char(ch2);
	cout<<"\n char :"<<char(ch3)<<" - value :"<<char(ch3);*/

	char ch='A';
	cout<<"\n char :"<<char(ch)<<" - value : "<<char(ch+0);
	cout<<"\n char :"<<char(ch+25)<<" - value :"<<char(ch+25);
	cout<<"\n char :"<<char(ch+32)<<" - value :"<<char(ch+32);
	cout<<"\n char :"<<char(ch+25+32)<<" - value :"<<char(ch+25+32);
	return 0;
}
