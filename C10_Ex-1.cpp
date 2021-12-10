// There is an abstract class called matter. 
// The attributes of the matter are the following
// Char color[10], float density
// Three classes have been derived from this class, solid, liquid and gas. 
// The attribute of solid class are the following:
// Char chemical_name[20], int melting point.
// The attributes of liquid class are the following:
// Char chemical_name[20], Int viscosity, int boiling point
// The attributes of gas are the following:
// Char chemical_name[20], int no_of_atoms_in_molecule,int ionization temp;
// Now write a program to create objects of any of the above three classes(any number).Use the idea of virtual functions. The program must be a menu_driven one. There must be provisions for adding, deleting searching, modifying and printing the report. Use a ststic variable to keep the count of objects at any point of time. The appropriate functions must be called using base class pointers.
#include<iostream>
using namespace std;
class matter
{
    public:
    char color[10];
    float density;

    void input1()
    {
        cout<<"Enter Color: ";
        cin>>color;
        cout<<"Enter Density: ";
        cin>>density;
    }
    void output1()
    {
        cout<<"Color: "<<color<<endl;
        cout<<"Density: "<<density<<endl;
    }
};
class solid: virtual public matter
{
    public:
    int melting_point;
    char chemical_name[20];

    void input2()
    {
        cout<<"Enter Chemical Name: ";
        cin>>chemical_name;
        cout<<"Enter Melting Point: ";
        cin>>melting_point;
    }
    void output2()
    {
        cout<<"Chemical Name: "<<chemical_name<<endl;
        cout<<"Enter Melting Point: "<<melting_point<<endl;
    }
};
class liquid: virtual public matter
{
    public:
    int viscosity, boiling_point;
    char chemical_name[20];

    void input3()
    {
        cout<<"Enter Chemical Name: ";
        cin>>chemical_name;
        cout<<"Enter Boiling Point: ";
        cin>>boiling_point;
        cout<<"Enter Viscosity: ";
        cin>>viscosity;
    }
    void output3()
    {
        cout<<"Chemical Name: "<<chemical_name<<endl;
        cout<<"Boiling Point: "<<boiling_point<<endl;
        cout<<"Viscosity: "<<viscosity<<endl;
    }
};
class gas: virtual public matter
{
    public:
    int no_of_atoms_in_molecule, ionization_temp;
    char chemical_name[20];

    void input4()
    {
        cout<<"Enter Chemical Name: ";
        cin>>chemical_name;
        cout<<"Enter No. of Atoms: ";
        cin>>no_of_atoms_in_molecule;
        cout<<"Enter Ionization Temperature: ";
        cin>>ionization_temp;
    }
    void output4()
    {
        cout<<"Chemical Name: "<<chemical_name<<endl;
        cout<<"No. of Atoms: "<<no_of_atoms_in_molecule<<endl;
        cout<<"Ionization Temperature: "<<ionization_temp<<endl;
    }
};
int main()
{
    solid ob;
    liquid ob1;
    gas ob2;
    
    int n;
    cout<<"Enter 1 - Solid, 2 - Liquid, 3 - Gas, 4 - Solid & Liquid, 5 - Liquid & Gas, 6 - Solid & Gas, 7 - All 3"<<endl;
    cin>>n;
    if(n==1)
    {
        ob.input1();
        ob.input2();
        ob.output1();
        ob.output2();
    }
    else if(n==2)
    {
        ob1.input1();
        ob1.input3();
        ob1.output1();
        ob1.output3();
    }
    else if(n==3)
    {
        ob2.input1();
        ob2.input4();
        ob2.output1();
        ob2.output4();
    }
    else if(n==4)
    {
        ob.input1();
        ob.input2();
        ob1.input3();
        ob.output1();
        ob.output2();
        ob1.output3();
    }
    else if(n==5)
    {
        ob1.input1();
        ob1.input3();
        ob2.input4();
        ob1.output1();
        ob1.output3();
        ob2.output4();
    }
    else if(n==6)
    {
        ob.input1();
        ob.input2();
        ob2.input4();
        ob.output1();
        ob.output2();
        ob2.output4();
    }
    else if(n==7)
    {
        ob.input1();
        ob.input2();
        ob1.input3();
        ob2.input4();
        ob.output1();
        ob.output2();
        ob1.output3();
        ob2.output4();
    }
    return 0;
}