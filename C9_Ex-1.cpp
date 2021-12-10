// 1) There is a class called vehicle. The attributes of the class are the following:
// char color[10], int reg_no
// Three classes have been derived from this class. They are:
// Air vehicle, land vehicle, water_vehicle
// The attributes of the air vehicle are the following:
// Int height achieved
// The attributes of land vehicle are the following:
// Int speed, float efficiency
// The attributes of the water vehicle are the following:
// Int depth achieved 
// The land vehicle class is again divided into two sub classes:
// passenger vehicle andGoods carriers
// The passenger vehicle has the following attributes: 
// int capacity(no, of passengers), char area(in which the vehicle runs)
// The goods carrier has the following attributes
// int capacity(tons),char materials (The material carried).
// Now write a program to create a database of objects of all the classes. Test the objects in main function Objects must be created for Each child class dynamically. There must be provisions for searching, deleting, modifying and adding of an object at any point of time. Use functions and constructors wherever necessary.
#include<iostream>
using namespace std;
class vehicle
{
    public:
    int reg_no;
    char color[10];
    void input1()
    {
        cout<<"Enter Registeration Number: ";
        cin>>reg_no;
        cout<<"Enter Color: ";
        cin>>color;
    }
};
class air_vehicle: virtual public vehicle
{
    public:
    int height_achieved;

    void input2()
    {
        cout<<"Enter Max Height you want: ";
        cin>>height_achieved;
    }
};
class water_vehicle: virtual public vehicle
{
    public:
    int depth_achieved;

    void input3()
    {
        cout<<"Enter Max Depth you want: ";
        cin>>depth_achieved;
    }
};
class land_vehicle: virtual public vehicle
{
    public:
    int speed;
    float efficiency;

    void input4()
    {
        cout<<"Enter Max Speed you want: ";
        cin>>speed;
        cout<<"Enter Max Efficiency you want: ";
        cin>>efficiency;
    }
};
class passenger_vehicle: virtual public land_vehicle
{
    public:
    int capacity1;
    char area[20];

    void input5()
    {
        cout<<"Enter Max Capacity you want: ";
        cin>>capacity1;
        cout<<"Enter Area Name you want(Any residental area): ";
        cin>>area;
    }
};
class goods_carrier: virtual public land_vehicle
{
    public:
    int capacity2;
    char materials[20];

    void input6()
    {
        cout<<"Enter Max Capacity you want: ";
        cin>>capacity2;
        cout<<"Enter Materials Name you want(Any Materials): ";
        cin>>materials;
    }
};
class final: virtual public air_vehicle, virtual public water_vehicle, virtual public passenger_vehicle, virtual public goods_carrier
{
    public:
    void output1()
    {
        cout<<"Registered Number: "<<reg_no<<endl;
        cout<<"Color: "<<color<<endl;
    } 
    void output2()
    {
        cout<<"Max Height: "<<height_achieved<<endl;
    }
    void output3()
    {
        cout<<"Max Depth: "<<depth_achieved<<endl;
    }
    void output4()
    {
        cout<<"Max Speed: "<<speed<<endl;
        cout<<"Max Efficiency: "<<efficiency<<endl;
    }
    void output5()
    {
        cout<<"Max Capacity: "<<capacity1<<endl;
        cout<<"Area: "<<area<<endl;
    }
    void output6()
    {
        cout<<"Max Capacity: "<<capacity2<<endl;
        cout<<"Materials: "<<materials<<endl;
    }
};
int main()
{
    final ob;
    ob.input1();
    int n,m;
    cout<<"Enter 1 - Air Vehicle, 2 - Water Vehicle, 3 - Land Vehicle: ";
    cin>>n;
    if(n==1)
    {
        ob.input2();
        ob.output1();
        ob.output2();
    }
    if(n==2)
    {
        ob.input3();
        ob.output1();
        ob.output3();
    }
    if(n==3)
    {
        cout<<"Enter 1 - Passenger Vehicle, 2 - Goods Carrier: ";
        cin>>m;
        if(m==1)
        {
            ob.input4();
            ob.input5();
            ob.output1();
            ob.output4();
            ob.output5();
        }
        if(m==2)
        {
            ob.input4();
            ob.input6();
            ob.output1();
            ob.output4();
            ob.output6();
        }
    }
    return 0;
}