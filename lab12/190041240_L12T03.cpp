#include<bits/stdc++.h>
using namespace std;

template<class T>
class my_stack
{
    vector<T> data;
public:
    void push(T n)
    {
        data.push_back(n);
    }
    T pop()
    {
        if(data.empty())
        {
            throw "Empty stack.\n";
        }
        T x=*data.rbegin();
        data.pop_back();
        return x;
    }
    T peek()
    {
        return data[0];
    }
};
int main()
{
    my_stack<int> stk1;
    my_stack<double> stk2;
    try
    {
        cout<<stk1.pop()<<endl;
    }
    catch(const char* err)
    {
        cerr<<err;
    }
    stk1.push(1);
    stk1.push(5);
    cout<<stk1.peek()<<endl;
    cout<<stk1.pop()<<" "<<stk1.pop()<<endl;
    stk2.push(0.1);
    stk2.push(0.5);
    cout<<stk2.peek()<<endl;
    cout<<stk2.pop()<<" "<<stk2.pop()<<endl;
}
