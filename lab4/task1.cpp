#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
    int acc_num;
    string acc_name,acc_type;
    double cur_bal,min_bal;
public:
        BankAccount()
        {}
        BankAccount(int num,string name,string type,double m_bal):acc_num(num),acc_name(name),acc_type(type),min_bal(m_bal),cur_bal(m_bal)
        {

        }
        void init()
        {
            string s;
            cout<<"Enter account number: ";cin>>acc_num;
            cout<<"Enter account holder name: ";cin>>acc_name;
            cout<<"Enter account type(Current/ Savings): ";cin>>acc_type;
            cout<<"Enter minimum balance: ";cin>>min_bal;
            cur_bal=min_bal;
        }
        void showAll()
        {
            cout<<"Account number: "<<acc_num<<endl;
            cout<<"Account holder name: "<<acc_name<<endl;
            cout<<"Account type: "<<acc_type<<endl;
            cout<<"Current balance: "<<cur_bal<<endl;
            cout<<"Minimum balance: "<<min_bal<<endl;
        }
        void showBalance()
        {
            cout<<"Current balance: "<<cur_bal<<endl;
        }
        void deposit(double n)
        {
            cur_bal+=n;
        }
        void withdraw(double n)
        {
            if(cur_bal-n<min_bal)cout<<"Error. Insufficient balance.\n";
            else cur_bal-=n;
        }
        void giveInterest()
        {
            double gain=cur_bal*0.03;
            gain-=gain*0.1;
            deposit(gain);
        }
        ~BankAccount()
        {
            cout<<"Account of Mr. "<<acc_name<<" with account no "<<acc_num<<" is destroyed with a balance BDT "<<cur_bal<<endl;

        }
};

int main()
{
    BankAccount a;
    a.init();
    a.showAll();

    a.deposit(500);
    a.withdraw(5000);
    a.withdraw(500);
    a.showBalance();
    a.giveInterest();
    a.showBalance();

    return 0;
}
