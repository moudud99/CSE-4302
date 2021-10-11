#include<bits/stdc++.h>

using namespace std;
namespace my_namespace
{
class my_class
{
    string name;
    int value;
    public:
    get_data()
    {
        cout<<name<<endl;
        cout<<value<<endl;
    }
    my_class()
    {
        name="aziz";
        value=0;
    }
};
}
class my_class
{
    string name;
    int value;
public:
    get_data()
    {
        cout<<name<<endl;
        cout<<value<<endl;
    }
    my_class()
    {
        name="gaziz";
        value=100;
    }
};
int main()
{
    my_class a;
    my_namespace:: my_class b;
    a.get_data();
    b.get_data();
}
