#include<bits/stdc++.h>

using namespace std;

class employee
{
    string emp_name;
    int ID,age;
    double salary;
    string getStatus()
    {
        if(age>25)
        {
            if(salary<=21000.0)return "Low";
            if(salary<=60000.0)return "Moderate";
            else return "High";
        }
        else
        {
            if(salary<=20000.0)return "Low";
            else return "Moderate";
        }
    }
public:
    feedInfo()
    {
        cout<<"Enter name: ";cin>>emp_name;
        cout<<"Enter ID: ";cin>>ID;
        cout<<"Enter age: ";cin>>age;
        cout<<"Enter salary: ";cin>>salary;
    }
    showInfo()
    {
        cout<<emp_name<<endl<<ID<<endl<<age<<endl<<salary<<endl<<getStatus()<<" Salaried Person.\n";
    }
};
int main()
{
    while(1){
    employee a;
    a.feedInfo();
    a.showInfo();
    }
    return 0;
}
