#include<bits/stdc++.h>
#include<typeinfo>

using namespace std;

enum shape_type {striangle,srectangle,scircle};

class shape
{
    static shape* arrp[];
    static int n;
protected:
    double area;
    string name;
public:
    virtual void getdata()
    {
        cout<<"Enter shape name: ";
        cin>>name;
    }
    virtual void putdata()
    {
        cout<<"Shape name: "<<name<<endl;
    }
    virtual void getarea()
    {

    }
    virtual shape_type get_type();
    static void add();
    static void display();
    static void read();
    static void write();
};
int shape::n;
shape* shape:: arrp[100];
class triangle: public shape
{
    double base,height;
public:
    void getdata()
    {
        name="triangle";
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
    }
    void putdata()
    {
        shape::putdata();
        cout<<"Base: "<<base<<endl;
        cout<<"height: "<<height<<endl;
        getarea();
        cout<<"Area: "<<area<<endl;
    }
    void getarea()
    {
        area=0.5*base*height;
    }
};
class rectangle: public shape
{
    double base,height;
public:
    void getdata()
    {
        name="rectangle";
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
    }
    void putdata()
    {
        shape::putdata();
        cout<<"Base: "<<base<<endl;
        cout<<"height: "<<height<<endl;
        getarea();
        cout<<"Area: "<<area<<endl;
    }
    void getarea()
    {
        area=base*height;
    }
};
class circle: public shape
{
    double radius;
public:
    void getdata()
    {
        name="circle";
        cout<<"Enter radius: ";
        cin>>radius;
    }
    void putdata()
    {
        shape::putdata();
        cout<<"Radius: "<<radius<<endl;
        getarea();
        cout<<"Area: "<<area<<endl;
    }
    void getarea()
    {
        area=3.14159*radius*radius;
    }
};

shape_type shape::get_type()
{
    if( typeid(*this) == typeid(triangle) )
        return striangle;
    else if( typeid(*this)==typeid(rectangle) )
        return srectangle;
    else if( typeid(*this)==typeid(circle) )
        return scircle;
    else
    {
        cerr << "\nBad type";
        exit(1);
    }
    return srectangle;
}
void shape::add()
{
    string s;
    cout<<"'t' to add triangle\n'r' to add rectangle\n'c' to add circle\nEnter your choice: ";
    cin>>s;
    if(s[0]=='t')
    {
        arrp[n]=new triangle;
        arrp[n++]->getdata();
    }
    else if(s[0]=='r')
    {
        arrp[n]=new rectangle;
        arrp[n++]->getdata();
    }
    else if(s[0]=='c')
    {
        arrp[n]=new circle;
        arrp[n++]->getdata();
    }
    else
        cout<<"Error\n";
        //cout<<"Success.\n";
}
void shape::display()
{
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<". ";
        cout<<arrp[i]->name<<endl;
        if(arrp[i]->get_type()==striangle)
        {
            arrp[i]->putdata();
            cout<<endl;
        }
        else if(arrp[i]->get_type()==srectangle)
        {
            arrp[i]->putdata();
            cout<<endl;
        }
        else if(arrp[i]->get_type()==scircle)
        {
            arrp[i]->putdata();
            cout<<endl;
        }
        else
            cout<<"Error\n";
    }
}
void shape::write()
{
    int sz;
    cout<<n<<" shapes.\n";
    ofstream os;

    os.open("shapes.DAT",ios::app|ios::binary);
    if(!os)
    {
        cout<<"Error opening file\n";
        return;
    }
    for(int i=0; i<n; i++)
    {
        shape_type tmp=arrp[i]->get_type();
        os.write((char*)&tmp,sizeof(tmp));
        if(tmp==striangle)
            sz=sizeof(triangle);
        else if(tmp==srectangle)
            sz=sizeof(rectangle);
        else if(tmp==scircle)
            sz=sizeof(circle);
        os.write((char*)&arrp[i],sz);
        if(!os)
        {
            cout<<"Error writing file.\n";
            return;
        }
    }
}
void shape::read()
{
    int sz;
    ifstream is;
    is.open("shapes.DAT",ios::binary);
    if(!is)
    {
        cout<<"Error opening file.\n";
        return ;
    }
    n=0;
    while(true)
    {
        shape_type tmp;
        is.read((char*)&tmp,sizeof(tmp));
        if(is.eof())
            break;
        if(!is)
        {
            cout<<"Error reading file.\n";
            return;
        }
        if(tmp==striangle)
        {
            arrp[n]=new triangle;
            sz=sizeof(triangle);
        }
        else if(tmp==srectangle)
        {
            arrp[n]=new rectangle;
            sz=sizeof(rectangle);
        }
        else if(tmp==scircle)
        {
            arrp[n]=new circle;
            sz=sizeof(circle);
        }
        is.read( (char*)arrp[n], sz );
        if(!is)
        {
            cout<<"Error reading file.\n";
            return ;
        }
        n++;
    }
    cout<<n<<" shapes read.\n";
}

int main()
{
    string s;
    char ch;
    while(1)
    {
        cout <<"'a' -- add data for shape\n'd' -- display data for shapes\n'w' -- write data to file\n'r' -- read from file\n'x' -- exit\nEnter selection: ";
        cin >> s;
        ch=s[0];
        switch(ch)
        {
        case 'a':
            shape::add();
            break;
        case 'd': //display all employees
            shape::display();
            break;
        case 'w': //write employees to file
            shape::write();
            break;
        case 'r': //read all employees from file
            shape::read();
            break;
        case 'x':
            exit(0); //exit program
        default:
            cout << "\nError.";
        }
    }
}
