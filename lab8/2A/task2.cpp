#include<iostream>
#include<string>

using namespace std;

class furniture
{
protected:
    int reg_price,dis_price;
    string material;
    string productName;///task 3
    void set_info()
    {
        cout<<"Enter regular price: ";
        cin>>reg_price;
        cout<<"Enter discounted price: ";
        cin>>dis_price;
        cout<<"Enter material: ";
        cin>>material;
    }
    void get_info()///task 2
    {
        cout<<"Regular price: "<<reg_price<<endl;
        cout<<"Discounted price: "<<dis_price<<endl;
        cout<<"Material: "<<material<<endl;
    }
public:
    void set_name()
    {
        cout<<"Name of product: ";
        cin>>productName;
    }
    string get_name()
    {
        return productName;
    }
};
class bed: private furniture
{
    string bedSize;
public:
    bed() {}
    bed(int p1,int p2, string mat, string BS)
    {
        reg_price=p1,dis_price=p2,material=mat,bedSize=BS;
    }
    void set_bed()
    {
        cout<<"Enter information of bed:\n";
        set_info();
        cout<<"Enter Bed Size: ";
        cin>>bedSize;
    }
    void productDetails()
    {
        get_info();
        cout<<"Bed Size: "<<bedSize<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};
class sofa: private furniture
{
    int seatNum;
public:
    sofa() {}
    sofa(int p1,int p2, string mat, int SN)
    {
        reg_price=p1,dis_price=p2,material=mat,seatNum=SN;
    }
    void set_sofa()
    {
        cout<<"Enter information of sofa:\n";
        set_info();
        cout<<"Enter Seat number: ";
        cin>>seatNum;
    }
    void productDetails()
    {
        get_info();
        cout<<"Seat number: "<<seatNum<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};
class dinningTable: private furniture
{
    int chairCount;
public:
    dinningTable() {}
    dinningTable(int p1,int p2, string mat, int CC)
    {
        reg_price=p1,dis_price=p2,material=mat,chairCount=CC;
    }
    void set_table()
    {
        cout<<"Enter information of Dinning table:\n";
        set_info();
        cout<<"Enter chair count: ";
        cin>>chairCount;
    }
    void productDetails()
    {
        get_info();
        cout<<"chair count: "<<chairCount<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};

int main()
{
    bed a;
    sofa b;
    dinningTable c;
    a.set_bed();
    a.productDetails();
    a.set_name();
    cout<<a.get_name()<<endl;
    cout<<endl;
    b.set_sofa();
    b.productDetails();
    cout<<endl;
    c.set_table();
    c.productDetails();

}
