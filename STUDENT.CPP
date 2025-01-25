#include<iostream>
using namespace std;

class result
{
    int rollno;
    string sname;
    int m1,m2,m3;
    float total,per;
    public:
    void setrollno()
    {
        cout<<"enter rollno:";
        cin>>rollno;
    }
     void setsname()
    {
        cout<<"enter student name:";
        cin>>sname;
    }
     void setsubject()
    {
        cout<<"enter m1:";
        cin>>m1;
        cout<<"enter m2:";
        cin>>m2;
        cout<<"enter m3:";
        cin>>m3;
    }
    int getrollno()
    {
        return rollno;
    }
    string getsname()
    {
        return sname;
    }
    int getsm1()
    {
        return m1;
    }
    int getsm2()
    {
        return m2;
    }
    int getsm3()
    {
        return m3;
    }
    int subtotal()
    {
        total=m1+m2+m3;
        return total ;
    }
    int persantage()
    {
        per=(total/300)*100;
        cout<<per<<"%";
        if(per>=90)
        {
            cout<<"\t A";
        }
        else if(per<90 && per>=70)
        {
            cout<<"\t B";
        }
        else if(per<70 && per>=50)
        {
            cout<<"\t C";
        }
        else if(per<50 && per>=30)
        {
            cout<<"\t D";
        }
        else
        {
            cout<<"\t FAIL";
        }
    }
};
int main()
{
     result  std[5];
    //  cout<<"rollno:\tsname:\tm1:\tm2:\tm3:\ttotal:\tper:\tgread:\n";
     for(int i=0;i<5;i++)
     {
     std[i].setrollno();
     std[i].setsname();
     std[i].setsubject();
     }
     cout<<"rollno:\tsname:\tm1:\tm2:\tm3:\ttotal:\tper:\tgread:\n";
    for(int i=0;i<5;i++)
    {
     cout<<"\n"<<std[i].getrollno()<<"\t"<<std[i].getsname()<<"\t"<<std[i].getsm1()<<"\t"<<std[i].getsm2()<<"\t"<<std[i].getsm3()<<"\t"<<std[i].subtotal()<<"\t"<<std[i].persantage()<<"\t";
     }
}
