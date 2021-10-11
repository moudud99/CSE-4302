#include<bits/stdc++.h>
using namespace std;

class Coordinate
{
    float x,y;
    float getDistanceHelper(Coordinate a)
    {
        return sqrt(a.x*a.x+a.y*a.y);
    }
public:
    Coordinate():x(0),y(0){}
    Coordinate(double a,double b):x(a),y(b){}
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
    float getDistance(Coordinate c)
    {
        double a=abs(x-c.x),b=abs(y-c.y);
        return sqrt(a*a+b*b);
    }
    float getDistance()
    {
        return sqrt(x*x+y*y);
    }
    void move_x(float val)
    {
        x+=val;
    }
    void move_y(float val)
    {
        y+=val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }
    bool operator >(Coordinate a)
    {
        return getDistance()>getDistanceHelper(a);
    }
    bool operator <(Coordinate a)
    {
        return getDistance()<getDistanceHelper(a);
    }
    bool operator >=(Coordinate a)
    {
        return getDistance()>=getDistanceHelper(a);
    }
    bool operator <=(Coordinate a)
    {
        return getDistance()<=getDistanceHelper(a);
    }
    bool operator ==(Coordinate a)
    {
        return getDistance()==getDistanceHelper(a);
    }
    bool operator !=(Coordinate a)
    {
        return getDistance()!=getDistanceHelper(a);
    }
    Coordinate operator ++()
    {
        move_x(1);
        move_y(1);
        return Coordinate(x,y);
    }
    Coordinate operator ++(int)
    {
        float a=x,b=y;
        move_x(1);
        move_y(1);
        return Coordinate(a,b);
    }
    Coordinate operator --()
    {
        move_x(-1);
        move_y(-1);
        return Coordinate(x,y);
    }
    Coordinate operator --(int)
    {
        float a=x,b=y;
        move_x(-1);
        move_y(-1);
        return Coordinate(a,b);
    }
};

int main()
{
    Coordinate a,b(5,7);
    a.display();b.display();
    a.move(5);
    a.display();
    cout<<a.getDistance(b)<<endl;
    cout<<a.getDistance()<<endl;
}
