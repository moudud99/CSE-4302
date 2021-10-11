#include<bits/stdc++.h>

using namespace std;


///pure virtual function
//unable to make object of base class.
class vehicle
{

public:
    virtual void capacity()=0;
};

///virtual function
/*class vehicle
{

public:
    virtual void capacity()
    {
        cout<<0<<endl;
    }
};*/


class car: public vehicle
{
public:
    void capacity()
    {
        cout<<4<<endl;
    }
};
class bus: public vehicle
{
public:
    void capacity()
    {
        cout<<20<<endl;
    }
};
class truck: public vehicle
{
public:
    void capacity()
    {
        cout<<6<<endl;
    }
};
int main()
{
    car c;
    bus b;
    truck t;
    c.capacity();
    b.capacity();
    t.capacity();
    vehicle* v;
    v=&c;
    v->capacity();
}
