#include<bits/stdc++.h>

using namespace std;

class seats
{
    string comfort;
    string warmer;
    public:
    void def_seats()
    {
        cout<<"Seat type(comfy,pleasent): ";
        cin>>comfort;
        cout<<"Seat warmer present(Yes/No): ";
        cin>>warmer;
        cout<<endl;
    }
    string getComfort()
    {
        return comfort;
    }
    string getWarmer()
    {
        string ret="present";
        if(warmer=="No"|| warmer=="no")ret="absent";
        return ret;
    }
};
class wheels
{
    int rad;
    public:
    void def_wheels()
    {
        cout<<"radius of wheels: ";
        cin>>rad;
        cout<<endl;
    }
    int getRad()
    {
        return rad;
    }
};
class engine
{
    double MFCR,MEPR,RPM;
    public:
    void def_engine()
    {
        cout<<" Maximum Fuel Consumption Rate: ";
        cin>>MFCR;
        cout<<"Maximum Energy Production Rate: ";
        cin>>MEPR;
        cout<<"Avarage RPM: ";
        cin>>RPM;
        cout<<endl;
    }
    double getMFCR()
    {
        return MFCR;
    }
    double getMEPR()
    {
        return MEPR;
    }
    double getRPM()
    {
        return RPM;
    }
};
class door
{
    string opening;
    public:
    void def_door()
    {
        cout<<"opening mode (sideways , upward): ";
        cin>>opening;
        cout<<endl;
    }
    string getOpening()
    {
        string ret=opening;
        if(opening!="sideways")ret+=" ways";
        return ret;
    }
};
class truck
{
    seats s1,s2;
    wheels w[6];
    engine eng;
    door d1,d2;
public:
    void make_truck_kun()
    {
        cout<<"Enter truck info:\n";
        cout<<"seat1:\n";
        s1.def_seats();
        cout<<"seat2:\n";
        s2.def_seats();
        cout<<"Wheels(6):\n";
        for(int i=0;i<6;i++)
        {
            w[i].def_wheels();
        }
        cout<<"Engine:\n";
        eng.def_engine();
        cout<<"Door1:\n";
        d1.def_door();
        cout<<"Door2:\n";
        d2.def_door();
    }

    void call_truck_kun()
    {
        cout<<"Truck information:\n";
        cout<<"seat1 is "<<s1.getComfort()<<" with seat warmer "<<s1.getWarmer()<<endl;
        cout<<"seat2 is "<<s2.getComfort()<<" with seat warmer "<<s2.getWarmer()<<endl;
        cout<<"Radius of wheels are: \n";
        for(int i=0;i<6;i++)cout<<w[i].getRad()<<" ";cout<<endl;
        cout<<"Engines Maximum Fuel Consumption Rate is "<<eng.getMFCR()<<endl;
        cout<<"Engines Maximum Energy Production Rate is "<<eng.getMEPR()<<endl;
        cout<<"Engines avarage RPM is "<<eng.getRPM()<<endl;
        cout<<"Door1 opens "<<d1.getOpening()<<endl;
        cout<<"Door2 opens "<<d2.getOpening()<<endl;
    }
};
int main()
{
    truck t1;
    t1.make_truck_kun();
    t1.call_truck_kun();
}
