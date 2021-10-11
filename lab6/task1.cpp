#include<bits/stdc++.h>
using namespace std;

class Counter
{
    int Count,Step;
public:
    Counter(): Count(0),Step(1){}
    Counter(int C,int S):Count(C),Step(S){}
    void setIncrementStep(int step_val)
    {
        if(step_val<0)cout<<"Error!Negative value found!\n";
        else Step=step_val;
    }
    int getcount()
    {
        return Count;
    }
    void increment()
    {
        Count+=Step;
    }
    void resetcount()
    {
        Count=0;
    }
    Counter operator +(Counter c)
    {
        return Counter(Count+c.Count,min(Step,c.Step));
    }
    Counter operator +(int var)
    {
        return Counter(Count+var,Step);
    }
    friend Counter operator +(int var,Counter c);
    Counter operator +=(Counter c)
    {
        Count+=c.Count;
    }
    Counter operator ++()
    {
        increment();
        return Counter(Count,Step);
    }
    Counter operator ++(int)
    {
        int v=Count;
        increment();
        return Counter(v,Step);
    }
};

Counter operator +(int val,Counter c)
{
    return Counter(c.Count+val,c.Step);
}

int main()
{
    Counter a,b(6,4),c(2,2);
    a.setIncrementStep(3);
    a.increment();
    cout<<a.getcount()<<endl;
    a.resetcount();
    cout<<a.getcount()<<endl;
    a=b+c;
    cout<<a.getcount()<<endl;
    a=b+5;
    cout<<a.getcount()<<endl;
    a=5+b;
    cout<<a.getcount()<<endl;
    a=++b;
    cout<<a.getcount()<<" "<<b.getcount()<<endl;
    a=b++;
    cout<<a.getcount()<<" "<<b.getcount()<<endl;
    a+=b;
    cout<<a.getcount()<<endl;
}
