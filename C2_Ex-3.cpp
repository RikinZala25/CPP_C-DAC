// Accept a person's name and basic salasry through the keyboard. Now print his salary slip as follows 
// hra = 20% of basic, da = 30% of basic, Pf = 10% of basic

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char name[20];
    int salary,hra,da,pf;

    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Salary: ";
    cin>>salary;

    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    hra = salary * 20/100;
    cout<<"Hra_Salary: "<<hra<<endl;
    da = salary * 30/100;
    cout<<"Da_Salary: "<<da<<endl;
    pf = salary * 10/100;
    cout<<"Pf_Salary: "<<pf<<endl;

    return 0;
}