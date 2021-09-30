// Write a program for following output using class;
// ------OUTPUT----- 
// NAME: 
// SALARY: 
// HRA: 
// DA: 
// GROSS: 
// PF: 
// NET:

#include<iostream>
#include<math.h>
using namespace std;
class person
{
    private:
        char name[20];
        int salary,hra,da,gross,pf,net;

    public:
        void getdata(void);
        void calcdata(void);
        void dispdata(void);
};
void person :: getdata(void)
{
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Salary: ";
    cin>>salary;
}
void person :: calcdata(void)
{
    hra = salary * 20/100;
    da = salary * 30/100;
    gross = (hra+da)/2;
    pf = salary * 10/100;
    net = (gross+pf)/2;
}
void person :: dispdata(void)
{
    cout<<"------DETAILS-----"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Hra_Salary: "<<hra<<endl;
    cout<<"Da_Salary: "<<da<<endl;
    cout<<"Gross_Salary: "<<gross<<endl;
    cout<<"Pf_Salary: "<<pf<<endl;
    cout<<"Net_Salary: "<<net<<endl;
}
int main()
{
    person p1;
    p1.getdata();
    p1.calcdata();
    p1.dispdata();

    return 0;
}