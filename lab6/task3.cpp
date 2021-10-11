#include<bits/stdc++.h>
using namespace std;

class FLOAT
{
    float x;
public:
    FLOAT():x(0){}
    FLOAT(float a):x(a){}
    float getdata()
    {
        return x;
    }
    void operator =(FLOAT a)
    {
        x=a.x;
    }
    void operator =(float a)
    {
        x=a;
    }
    float operator +(FLOAT a)
    {
        return x+a.x;
    }
    float operator -(FLOAT a)
    {
        return x-a.x;
    }
    float operator *(FLOAT a)
    {
        return x*a.x;
    }
    float operator /(FLOAT a)
    {
        if(a.x==0)cout<<"HoHo! What are you doing?\n";
        else return x/a.x;
        return 0;
    }
};

int main()
{
    FLOAT F1=2.5,F2=3.1;
    cout<<F1+F2<<endl;
    cout<<F1-F2<<endl;
    cout<<F1*F2<<endl;
    cout<<F1/F2<<endl;
}
