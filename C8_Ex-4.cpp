// 4. The distance between two cities are given in miles. Write a program to convert it into an object of class km. The attributes of the km class are kms (Kilometers) and ms(meters). Test your program.
#include<iostream>
using namespace std;
class A
{
    public:
    float m,n;

    void input()
    {
        cout<<"Enter Distance in Miles: ";
        cin>>m;
        // Miles to Meters: x * 1609
        m=m*1609;
    }
    void output()
    {
        n=0;
        if(m>=1000)
        {
            do
            {
            m=m-100;
            n++;
            }
            while(m>=1000);
        }
        else if(m<1000)
        {
            n=0;
            m=m;
        }
        cout<<"Distance"<<endl;
        cout<<"Kilometers: "<<n<<" & "<<"Meters: "<<m<<endl;
    }
};
int main()
{
    A ob;
    ob.input();
    ob.output();
    return 0;
}