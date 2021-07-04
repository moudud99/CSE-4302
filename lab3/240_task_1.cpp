#include<iostream>

using namespace std;

class Counter
{
private:
    int count,val;
public:
    Counter():count(0),val(0){}
    void setIncrementStep(int step_val)
    {
        val=step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=val;
    }
    void resetCount()
    {
        count=0;
    }
};

int main()
{
    Counter c;
    cout<<c.getCount()<<endl;
    c.setIncrementStep(100);
    c.increment();
    cout<<c.getCount()<<endl;
    c.resetCount();
    cout<<c.getCount()<<endl;


    return 0;
}
