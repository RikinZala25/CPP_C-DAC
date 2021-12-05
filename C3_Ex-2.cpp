//Write a program to swap two numbers using reference variables. Swapping must take place in a function and the result must be printed from the main function
#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter values"<<endl;
    cout<<"N1: ";
    cin>>a;
    cout<<"N2: ";
    cin>>b;

    cout << "Before swapping." << endl;
    cout << "N1 = " << a << ", N2 = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping." << endl;
    cout << "N1 = " << a << ", N2 = " << b << endl;
    return 0;
}