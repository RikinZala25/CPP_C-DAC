//3) The class cloth contains the following attributes. Color (character array), price (float), stock(int). Write a program to create the objects of the class cloth. To make an object, the following constructors must be provided.
// 1). A copy constructor 2) A parameterized constructor (the arguments can be given in any order). 3) A default argument constructor. The color attribute must be making use the idea of dynamic constructor. Your program must destruct the objects created at the end of the program.
#include<iostream>
using namespace std;
class A
{
    public:
    int stock;
    float price;
    char color[20];

    A()
    {
        cout<<"Enter Stock Num: ";
        cin>>stock;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Enter Color: ";
        cin>>color;

        cout<<endl<<stock<<price<<color<<endl;
    }
    A(int x)
    {
        cout<<"Enter Stock Num: ";
        cin>>stock;
        x = price;
        cout<<"Enter Color: ";
        cin>>color;

        cout<<endl<<stock<<price<<color<<endl;
    }
};
int main()
{
    int n;
    A ob;
    cout<<"Enter Price: ";
    cin>>n;
    A ob1(n);
    return 0;
}