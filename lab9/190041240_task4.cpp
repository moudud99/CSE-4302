#include <iostream>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string Name;///Task 3 updated part
public:

    Furniture(double p=0,double d=0,Material m=Material::Wood,string s="")
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        Name=s;
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    double getDiscount()
    {
        return discount;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    double getValue()
    {
        return discount;
    }
    double getPrice()
    {
        if(price<discount)return 0;
        return price-discount;
    }
    virtual void productDetails()
    {
        cout<<"Product Name: "<<Name<<endl;///task3 updated part
        cout<<"Regular Price: "<<price<<endl;
        cout<<"Promo Price: "<<getPrice()<<endl;
        cout<<"Material: "<<getMadeof()<<endl;
    }
};



enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
private:
    BedSize Size;
public:
    Bed(double p=0,double d=0,Material m=Material::Wood,BedSize bs=BedSize::Single,string s="")
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        Name=s;
        setSize(bs);
    }
    void setSize(BedSize val)
    {
        Size=val;
    }
    string getSize()
    {
        if(Size==BedSize::Single)
            return string("Single");
        else if(Size==BedSize::SemiDouble)
            return string("Semi Double");
        else if(Size==BedSize::Double)
            return string("Double");
        else
            return string("");
    }
    void productDetails()
    {
        for(int i=0;i<10;i++)cout<<"-";cout<<endl;
        Furniture::productDetails();
        cout<<"Bed Size: "<<getSize()<<endl;
        for(int i=0;i<10;i++)cout<<"#";cout<<endl;
    }
};

enum class SeatNum {One, Two, Three, Four, Five};
class Sofa:public Furniture
{
private:
    SeatNum Seat;
public:
    Sofa(double p=0,double d=0,Material m=Material::Wood,SeatNum sn=SeatNum::One,string s="")
    {

        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        Name=s;
        setSeat(sn);
    }
    void setSeat(SeatNum val)
    {
        Seat=val;
    }
    string getSeat()
    {
        if(Seat==SeatNum::One)
            return string("One");
        else if(Seat==SeatNum::Two)
            return string("Two");
        else if(Seat==SeatNum::Three)
            return string("Three");
        else if(Seat==SeatNum::Four)
            return string("Four");
        else if(Seat==SeatNum::Five)
            return string("Five");
        else
            return string("");
    }
    void productDetails()
    {
        for(int i=0;i<10;i++)cout<<"-";cout<<endl;
        Furniture::productDetails();
        cout<<"Seat Number: "<<getSeat()<<endl;
        for(int i=0;i<10;i++)cout<<"#";cout<<endl;
    }
};

enum class ChairCount {Two,Four,Six};
class DiningTable:public Furniture
{
private:
    ChairCount Chair;
public:
    DiningTable(double p=0,double d=0,Material m=Material::Wood,ChairCount cc=ChairCount::Two,string s="")
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        Name=s;
        setchair(cc);
    }
    void setchair(ChairCount val)
    {
        Chair=val;
    }
    string getChair()
    {
        if(Chair==ChairCount::Two)
            return string("Two");
        else if(Chair==ChairCount::Four)
            return string("Four");
        else if(Chair==ChairCount::Six)
            return string("Six");
        else
            return string("");
    }
    void productDetails()
    {
        for(int i=0;i<10;i++)cout<<"-";cout<<endl;
        Furniture::productDetails();
        cout<<"Chair Count: "<<getChair()<<endl;
        for(int i=0;i<10;i++)cout<<"#";cout<<endl;
    }
};


/**task 4
sort_furniture_discount will sort the array in descending order based on their discounted price.
You may need to add some member functions
**/
void sort_furniture_discount(Furniture *furnitures[],int no_of_furnitures)
{
    int i,j;
    for(i=0;i<no_of_furnitures;i++)
    {
        for(j=i+1;j<no_of_furnitures;j++)
        {
            if(furnitures[i]->getValue()<furnitures[j]->getValue())
            {
                Furniture *temp=furnitures[i];
                furnitures[i]=furnitures[j];
                furnitures[j]=temp;
            }
        }
    }
}


int main()
{
    Furniture* f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000,123,Material::Wood,BedSize::Single,"Solo Bed");
    f_list[1] = new Sofa(11000,234,Material::Steel,SeatNum::Five,"Big Sofa");
    f_list[2] = new DiningTable(13000,345,Material::Wood,ChairCount::Four,"Small Table");
    f_list[3] = new Bed(10090,123,Material::Wood,BedSize::Double,"King Bed");

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    for(int i=0; i<4; i++)
    {
        //f_list[i]->productDetails();
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    cout<<"\nSorted list: \n";
    sort_furniture_discount(f_list,4);

    /**
        Regular price : 10000
        Discount : 10 tk more (500)
        Promo Price : 9490
    **/
    for(int i=0;i<4;i++)
    {
        f_list[i]->setDiscount(f_list[i]->getDiscount()+10);
    }
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    /**task 4 ends here*/

}
