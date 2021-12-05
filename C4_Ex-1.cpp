// 1. Write a program to perform arithmetic operations on two given numbers. The calculation (according to the choice entered by the user) must be done using inline functions. The program must work until the user asks to stop.
#include<iostream>
using namespace std;
// Arithmetic Functions Below +, -, *, /
inline int sum(int n1, int n2)
{
    return n1 + n2;
}
inline int sub(int n1, int n2)
{
    return n1 - n2;
}
inline int mul(int n1, int n2)
{
    return n1 * n2;
}
inline float division(int n1, int n2)
{
    return n1 / n2;
}
int main()
{
    int a,b,c,n;
    cout<<"Enter Num1: ";
    cin>>a;
    cout<<"Enter Num2: ";
    cin>>b;
    retry:
    cout<<"Enter: \n1 - Summation \n2 - Subtraction \n3 - Multiplication \n4 - Division"<<endl;
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"Summation: "<<sum(a,b);
        break;
    
    case 2:
        cout<<"Subtraction: "<<sub(a,b);
        break;
    
    case 3:
        cout<<"Multiplication: "<<mul(a,b);
        break;

    case 4:
        cout<<"Division: "<<division(a,b);
        break;
    
    default:
        break;
    }

    cout<<"\nDo you want to continue?(1 - yes, 2 - no): ";
    cin>>n;
    if(n==1)
    {
        goto retry;
    }
    else
    {
        return 0;
    }
 return 0;
}