// 2. A quadratic equation has roots. If we know the roots of the equation, we can calculate the coefficients of x^2, x and constant. Similarly, if we know the coefficients, we can find out the roots. You have two classes, 'root' and 'coeff is a(int), b(int) and c(int). Write a program to convert the objects of root class into coeff class and vice-versa. Test your program by creating objects of these classes.
// 3. Practically Q.3 is completed
#include<iostream>
#include <cmath>
using namespace std;
class coeff;
class root
{
    public:
        float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    root()
    {
    cout << "Enter coefficients a: ";
    cin >> a;
    cout << "Enter coefficients b: ";
    cin >> b;
    cout << "Enter coefficients c: ";
    cin >> c;
    }

    void get_root()
    {
        discriminant = b*b - 4*a*c;
    
        if (discriminant > 0) 
        {
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    
        else if (discriminant == 0) 
        {
            cout << "Roots are real and same." << endl;
            x1 = -b/(2*a);
            cout << "x1 = x2 =" << x1 << endl;
        }

        else 
        {
            realPart = -b/(2*a);
            imaginaryPart =sqrt(-discriminant)/(2*a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
    }
};
class coeff
{
    public:
        float a, b, c, x1, x2, discriminant, realPart, imaginaryPart, tens_term, unit_term;

    coeff()
    {
        cout << "Enter Root x1: ";
        cin >> x1;
        cout << "Enter Root x2: ";
        cin >> x2;
    }

    void get_coeff()
    {
        tens_term = 0 - (x1 + x2); // b/a
        unit_term = x1 * x2; // c/a

        cout<<"Coefficient of Roots: "<<endl;

        if(unit_term < 0 && tens_term < 0)
        {
            cout<<"x^2 "<< tens_term << "x "<<unit_term<<endl;
        }
        else if(unit_term < 0 && tens_term > 0)
        {
            cout<<"x^2 + "<< tens_term << "x "<<unit_term<<endl;
        }
        if(unit_term > 0 && tens_term < 0)
        {
            cout<<"x^2 "<< tens_term << "x + "<<unit_term<<endl;
        }
        if(unit_term > 0 && tens_term > 0)
        {
            cout<<"x^2 + "<< tens_term << "x + "<<unit_term<<endl;
        }
    }
};
int main() 
{ 
    int i,n;
    retry:
    cout<<"Enter 1 - To find Roots from Coefficient / 2 - To find Coefficient from Roots: ";
    cin>>n;

    if(n==1)
    {
        root r;
        r.get_root();
    }
    else if(n==2)
    {
        coeff c;
        c.get_coeff();
    }
    else
    {
        cout<<"Enter Option Again:"<<endl;
        goto retry;
    }
    return 0;
}
   