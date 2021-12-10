// 2) There is a class called food. The attributes of food class are the following: Int price (per kg), char name.
// There is put data data function in this class to print the values of the attributes Two classes have been derived from this class, veg and non-veg.
// The non-veg have the following attributes:
// Int fat content, char meat colorfred or white) 
// The veg class have the following attributes:
// Char Seed_color, int protein content
// A class called sandwich (which is made up off both veg and non-veg) has been derived from the above classes (veg and nonveg). Write a program to create objects of this class. The attributes price(int) and calon value(float) are also included in the new class. A menu driven program must be created to deal with adding, deleting, editing and searching of the objects of this class. Take care that only one copy of the put data function will reach in the sand wich class
#include<iostream>
using namespace std;
class food
{
    public:
    int price;
    char name[30];

    void put()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Price(Per Kg): ";
        cin>>price;
    }
    void get()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price(Per kg): "<<price<<endl;
    }
};
class veg: virtual public food
{
    public:
    char seed_color[20];
    int protein_content;

    void put1()
    {
        cout<<"Enter Seed Color: ";
        cin>>seed_color;
        cout<<"Enter Protein Content: ";
        cin>>protein_content;
    }
    void get1()
    {
        cout<<"Seed Color: "<<seed_color<<endl;
        cout<<"Protein Content: "<<protein_content<<endl;
    }
};
class non_veg: virtual public food
{
    public:
    int fat_content;
    char meat_color[20];

    void put2()
    {
        cout<<"Enter Meat Color: ";
        cin>>meat_color;
        cout<<"Enter Fat Content: ";
        cin>>fat_content;
    }
    void get2()
    {
        cout<<"Enter Meat Color: "<<meat_color<<endl;
        cout<<"Enter Fat Content: "<<fat_content<<endl;
    }
};
class sand_wich: virtual public veg, virtual public non_veg
{
    public:
    int price2;
    float calori_value;

    void put3()
    {
        cout<<"Enter Price: ";
        cin>>price2;
        cout<<"Enter Calori Value: ";
        cin>>calori_value;
    }

    void get3()
    {
        cout<<"Price: "<<price2<<endl;
        cout<<"Enter Calori Value: "<<calori_value<<endl;
    }
};
int main()
{
    sand_wich ob;
    ob.put();
    int n;
    cout<<"Enter 1 - Veg Sandwich, 2 - Non-Veg Sandwich: ";
    cin>>n;
    if(n==1)
    {
        ob.put1();
        ob.put3();
        ob.get();
        ob.get1();
        ob.get3();
    }
    else if(n==2)
    {
        ob.put2();
        ob.put3();
        ob.get();
        ob.get2();
        ob.get3();       
    }
    return 0;
}