// Write a program to calculate the square root of a given number. Rmeeber, -ve numbers dont have a square root. Your program must be valid at this point.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float num;
    cout<<"Enter Number: ";
    cin>>num;

    if(num<0)
    {
        cout<<"Its square root is not possible"<<endl;
    }
    else{
        cout<<"Square Root: "<<sqrt(num)<<endl;
    }
    return 0;
}