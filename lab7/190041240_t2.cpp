#include<bits/stdc++.h>

using namespace std;
class staff
{
    int code;
    string name;
protected:
    staff()
    {

    }
    staff(int n,string s):code(n),name(s){}
    void setStaff()
    {
        cout<<"code: ";
        cin>>code;
        getchar();
        cout<<"name: ";
        //cin>>name;
        getline(cin,name);
    }
    void display()
    {
        cout<<setw(20)<<name<<setw(10)<<code;
    }
};
class teacher: private staff
{
    string sub;
    string pub;
public:
    teacher()
    {
    ;
    }
    void setTeacher()
    {
        cout<<"Enter teacher information:\n";
        setStaff();
        cout<<"Enter subject: ";
        //cin>>sub;
        getline(cin,sub);
        cout<<"Enter name of publication: ";
        //cin>>pub;
        getline(cin,pub);
    }
    void display()
    {

        cout<<setw(20)<<"name"<<setw(10)<<"code"<<setw(20)<<"subject"<<setw(20)<<"publication\n";
        staff:: display();
        cout<<setw(20)<<sub<<setw(20)<<pub<<endl;
        //cout<<name<<endl; ///access denied.
    }
};
class typist: private staff
{
    double speed;
    protected:
        typist(){}
        void setTypist()
        {
            setStaff();
            cout<<"Speed: ";
            cin>>speed;
        }
        void display()
        {
            staff::display();
            cout<<setw(10)<<speed;
        }
};
class officer: private staff
{
    string grade;
public:
    officer(){}
    void setOff()
    {
        cout<<"Enter officer info:\n";
        setStaff();
        getline(cin,grade);
    }
    void display()
    {
        cout<<setw(20)<<"name"<<setw(10)<<"code"<<setw(20)<<"Category"<<endl;
        staff:: display();
        cout<<setw(20)<<grade<<endl;
    }
};
class regular: private typist
{
    public:
    regular(){}
    void setReg()
    {
        cout<<"Enter regular typist info:\n";
        setTypist();
    }
    void display()
    {
        cout<<setw(20)<<"name"<<setw(10)<<"code"<<setw(10)<<"Speed"<<endl;
        typist::display();
        cout<<endl;
    }
};
class casual: private typist
{
    double d_wages;
public:
    casual(){}
    void setCas()
    {
        cout<<"Enter casual typist info:\n";
        setTypist();
        cout<<"Daily wages: ";
        cin>>d_wages;
    }
    void display()
    {
        cout<<setw(20)<<"name"<<setw(10)<<"code"<<setw(10)<<"Speed"<<setw(15)<<"daily wages\n";
        typist::display();
        cout<<setw(15)<<d_wages<<endl;
    }
};

int main()
{
    casual t;
    t.setCas();
    t.display();
}
