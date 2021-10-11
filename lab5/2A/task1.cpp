#include<iostream>

using namespace std;

class Counter
{
private:
    int Count,step_v;
public:
    Counter():Count(0),step_v(1){}
    Counter(int C,int S):Count(C),step_v(S){}
    void setIncrementStep(int step_val)
    {
        if(step_val<0)
        {
            cout<<"Negative value not allowed\n";
            return;
        }
        step_v=step_val;
    }
    int getCount()
    {
        return Count;
    }
    void increment()
    {
        Count+=step_v;
    }
    void resetCount()
    {
        Count=0;
    }
    Counter operator +(Counter a)
    {
        return Counter(Count+a.Count,min(step_v,a.step_v));
    }
    Counter operator +(int var)
    {
        return Counter(Count+var,step_v);
    }
    friend Counter operator +(int var,Counter a);
    Counter operator ++()
    {
        Count+=step_v;
        return Counter(Count,step_v);
    }
    Counter operator ++(int)
    {
        Count+=step_v;
        return Counter(Count,step_v);
    }
    friend Counter operator +(Counter a);
    ~Counter()
    {
        Count=set_v=0;
    }
};
Counter operator +(int var,Counter a)
{
    return Counter(a.Count+var,a.step_v);
}
int main()
{
    int c,s;
    Counter c1;
    c1.setIncrementStep(2);
    c1.increment();
    cout<<c1.getCount()<<endl;
    c1.resetCount();
    Counter c2(4,3);
    Counter c3(5,2);
    c1=c2+c3;
    cout<<c1.getCount()<<endl;
    c1=c2+10;
    cout<<c1.getCount()<<endl;

    c1=c2++;
    c1=++c2;
    cout<<c1.getCount()<<endl;
    c1=5+c2;
    cout<<c1.getCount()<<endl;
}
