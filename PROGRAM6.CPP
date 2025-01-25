#include<iostream>
using namespace std;
class test
{
    string sname;
    public:
    test(){}
    test(string str)
    {
        sname=str;
    }
    void setstring()
    {
        cout<<"enter sname:";
        cin>>sname;
    }
    string getstring()
    {
        return sname;
    }
};
int main()
{
    test t1,t2("bhumi");
    //t1.setstring();
    //t2.getstring();
    cout<<"\n name :"<<t2.getstring();
    return 0;
}
