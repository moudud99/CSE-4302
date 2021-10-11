#include<iostream>
#include<string>

using namespace std;

class furniture
{
    int reg_price,dis_price;
    string material;
    string productName;///task 3
protected:
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
        cout<<"Bed name: "<<get_name()<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
};
class sofa: private furniture
{
    int seatNum;
public:
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
        cout<<"sofa name: "<<get_name()<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
};
class dinningTable: private furniture
{
    int chairCount;
public:
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
        cout<<"dinning table name: "<<get_name()<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
};

int main()
{
    bed a;
    sofa b;
    dinningTable c;
    a.set_bed();
    a.set_name();
    a.productDetails();
    cout<<endl;
    b.set_sofa();
    b.productDetails();
    cout<<endl;
    c.set_table();
    c.productDetails();

}
