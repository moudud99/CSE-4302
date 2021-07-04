#include<iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator,denominator;
public:
    RationalNumber():numerator(0),denominator(1){}
    void assign(int num,int den)
    {
        if(den==0)
        {
            cout<<"Error.Undefined number.\n";
            return;
        }
        numerator=num;
        denominator=den;
    }
    double convert()
    {
        return (double)numerator/(double)denominator;
    }
    void invert()
    {
        if(numerator==0)
        {
            cout<<"Error.Undefined number.\n";
            return;
        }
        swap(numerator,denominator);
    }
    void print()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
};

int main()
{
    RationalNumber n;
    n.assign(3,2);
    cout<<n.convert()<<endl;
    n.print();
    n.invert();
    cout<<n.convert()<<endl;
    n.print();
    n.assign(0,1);
    n.print();
    n.invert();
    n.assign(1,0);
    cout<<n.convert()<<endl;
    return 0;
}
