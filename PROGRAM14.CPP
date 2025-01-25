// copy cunstructer
#include<iostream>
using namespace std;
class Account
{
    int accbal;
    public:
    Account(int accbal)
    {
        this->accbal=accbal;
    }
    Account(Account& saif)
    {
        accbal=saif.accbal;
    }
    void showacc()
    {
        cout<<"\n accbal:"<<accbal;
    }

};
int main()
{
    Account saif(3000),utsav(saif);
    saif.showacc();
    utsav.showacc();
}
