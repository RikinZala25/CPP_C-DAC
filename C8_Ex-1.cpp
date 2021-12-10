// 1. There is a class called distance. The attributes of the class are, meter(integer) and centimeter(float). Overload the following operators to perform operations on the objects of the class distance.
// >>: To accept values for the attributes 
// <<: To print the values of the attributes
// +: To add two distances
// .: To subtract smaller distance from the larger
// +=: To add a fixed distance
// *=: To multiply the distance with a fixed quantity
// /=: To divide the distance with a fixed quantity
// ==: To compare two distances
// ++ : To add one meter and one centimeter with existing distance
// Test your program in the main function. Note that 100 cms makes one meter. Your overloaded functions must take care about this factor. For example, if we use ++ operator for a distance 1m and 99 cms, The result must be 3 meters.

#include<iostream>
using namespace std;
class dist
{
    public:
    int meters;
    float centimeters;

    dist()
    {
        cout<<"Enter Distance"<<endl;
        cout<<"Enter Distance in Meters: ";
        cin>>meters;
        cout<<"Enter Distance in Centimeters: ";
        cin>>centimeters;
    }
    void operator +()
    {
        int m1,final_m,n;
        float cm1,final_cm;
        cout<<"Enter Distance in Meters: ";
        cin>>m1;
        cout<<"Enter Distance in Centimeters: ";
        cin>>cm1;

        final_cm = centimeters + cm1;
        final_m = meters + m1;
        cout<<"Resultant Distance"<<endl;

        if(final_cm>100)
        {
            n = final_cm-100;
            final_cm=n;
            final_m=final_m + n;
            cout<<"Distance: "<<final_m<<"."<<final_cm<<endl;
        }
        else if(final_cm==100)
        {
            n = final_cm-100;
            final_cm=n;
            final_m=final_m + 1;
            cout<<"Distance: "<<final_m<<"."<<final_cm<<endl;
        }
        else if(final_cm<100)
        {
            cout<<"Distance: "<<final_m<<"."<<final_cm<<endl;
        }
    }
};
int main()
{
    dist ob;
    +ob;
    return 0;
}