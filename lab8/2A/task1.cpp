#include<iostream>
#include<string>

using namespace std;

class furniture
{
protected:
    int reg_price,dis_price;
    string material;
    void set_info()
    {
        cout<<"Enter regular price: ";
        cin>>reg_price;
        cout<<"Enter discounted price: ";
        cin>>dis_price;
        cout<<"Enter material: ";
        cin>>material;
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
};

int main()
{
    bed a;
    sofa b;
    dinningTable c;
    a.set_bed();
    b.set_sofa();
    c.set_table();

}
