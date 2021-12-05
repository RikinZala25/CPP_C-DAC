// 3. Write a program to calculate the compound interest on a sum. Take the default rate as 10% and years as 2. Test it for all possible combinations.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    float p,r,n,CI;

    cout<<"Enter Principle Amount: ";
    cin>>p;
    cout<<"Default Rate is '10%' do you want to change? (Yes - 1/No - 2): ";
    cin>>a;
    if(a==1)
    {
        cout<<"Enter Rate: ";
        cin>>r;
    }
    else
    {
        r = 10;
    }
    cout<<"Default Time period is 2 years do you want to change? (Yes - 1/No - 2): ";
    cin>>b;
    if(b==1)
    {
        cout<<"Enter Time period: ";
        cin>>n;
    }
    else
    {
        n = 2;
    }
    CI=p*pow((1+r/100),n);
    cout<<"Compound Interest: "<<CI;
    return 0;
}