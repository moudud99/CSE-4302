#include<bits/stdc++.h>

using namespace std;

class rectangle
{
    double length,width;
public:
    rectangle(double l=1.0,double w=1.0)
    {
        length=l,width=w;
    }
    double perimeter()
    {
        return 2.0*(length+width);
    }
    double area()
    {
        return length*width;
    }
    double diagonal()
    {
        return sqrt(length*length+width*width);
    }
    double angle()
    {
        return acos(length/diagonal());
    }
    void setLength(double l)
    {
        if(l>=1.0&& l<20.0)length=l;
        else cout<<"Error. Invalid value.\n";
    }
    void setWidth(double w)
    {
        if(w>=1.0&& w<20.0)width=w;
        else cout<<"Error. Invalid value.\n";
    }
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
};

int main()
{
    rectangle a,b(5.0,10.0);
    cout<<b.getLength()<<" "<<b.getWidth()<<endl;
    cout<<b.perimeter()<<endl;
    cout<<b.area()<<endl;
    cout<<b.diagonal()<<endl;
    cout<<b.angle()<<endl;
    cout<<a.getLength()<<" "<<a.getWidth()<<endl;
    a.setLength(20.0);
    a.setLength(10.0);
    cout<<a.getLength()<<" "<<a.getWidth()<<endl;
    return 0;
}
