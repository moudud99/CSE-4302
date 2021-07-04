#include<bits/stdc++.h>

using namespace std;

class Medicine
{
    char name[101], genericName[101];
    double discountPercent, unitPrice;
public:
    Medicine():discountPercent(5),unitPrice(0){}
    void assignName(char* n, char* gn)
    {
        strcpy(name,n);
        strcpy(genericName,gn);
    }
    void assignPrice(double price)
    {
        if(abs(price-0)<0.000001)

        {
            cout<<"Error. Negative price.\n";
            return;
        }
        unitPrice=price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>45|| percent<0)
        {
            cout<<"Error. Invalid discount.\n";
        }
        discountPercent=percent;
    }
    double getSellingPrice(int nos)
    {
        double cost=unitPrice-unitPrice*(discountPercent/100);
        cost*=(double)nos;
        return cost;
    }
    void display()
    {
        cout<<name<<" ("<<genericName<<") has a unit price BDT "<<unitPrice<<". Current discount "<<discountPercent<<"%.\n";
    }
};

int main()
{
    Medicine m;
    m.assignName("Napa","Paracetamol");
    m.assignPrice(0.8);
    m.setDiscountPercent(10);
    cout<<m.getSellingPrice(100)<<endl;
    m.display();

    return 0;
}
