// convert degrees to fahrenheit

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float d,f;
    cout<<"Enter temperature in Degrees: ";
    cin>>d;

    f=(d*9)/5 + 32;
    cout<<"Temperature in Fahrenheit: "<<f<<endl;
}