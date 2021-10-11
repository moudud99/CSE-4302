#include<bits/stdc++.h>

using namespace std;

class person
{
    string name;
public:
    person(string n="")
    {
        name=n;
    }
    void showData()
    {
        cout<<name<<endl;
    }
};
class car
{
    string name;
    person* owner;
    ///restricting class to copy [generate error]
    //keeping them private prevents access to them.
/*
    void operator= (car& c)
    {
        name=c.name;
        owner= NULL;
    };
    car(car& c)
    {
        name=c.name;
        owner=NULL;
    }
*/
public:
    car(string n="", person own=person())
    {
        name=n;
        owner=&own;
    }
    ///assignment operator and copy initializer
    //copy car object data except owner info.
    //if default functions used owner info would be copied as well.

    void operator= (car& c)
    {
        name=c.name;
        owner= NULL;
    };
    car(car& c)
    {
        name=c.name;
        owner=NULL;
    }

    void showData()
    {
        cout<<name<<endl;
        if(owner!=NULL)owner->showData();
    }
};

int main()
{
    person p("alex");
    car c("bmw",p);
    car c1=c;
    c1.showData();
}
