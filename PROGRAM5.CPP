//destructor or constructor
#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test(int a)
    {
        n=a;
        cout<<" \n constructor call"<<n;
    }
    ~test()
    {
        cout<<"\n destructor call"<<n;
    }

};
int main()
{
    test t1(1),t2(2),t3(3);
}
