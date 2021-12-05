// 2. Write a program to find out the area of closed figures (circle, rectangle, square, trapezium, cube, sphere and parallelogram). The calculations must be done using inline functions. All the functions must have the same name i.e. area. Use the concept of function Overloading. The program must work until the user asks so. The necessary details according to the choice, can be accepted from the user. The program must be a menu driven one.
#include<iostream>
#include<cmath>
using namespace std;
inline float circle(int n1)
{
    return 3.14 * pow(n1,2);
}
inline int rectangle(int n1, int n2)
{
    return n1 * n2;
}
inline int square(int n1)
{
    return pow(n1,2);
}
inline float trapezium(int n1, int n2, int n3)
{
    return ((n1 + n2)/2 * n3);
}
inline int cube(int n1)
{
    return pow(n1,3);
}
inline float sphere(int n1)
{
    return 4 * 3.14 * pow(n1,2);
}
inline int parallelogram(int n1, int n2)
{
    return n1 * n2;
}
int main()
{
    int a,b,c,n;
    retry:
    cout<<"Enter to find Area: \n1 - Circle\n2 - Rectangle \n3 - Square \n4 - Trapezium \n5 - Cube \n6 - Sphere \n7 - Parallelogram"<<endl;
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"Enter Radius: ";
        cin>>a;
        cout<<"Area of Circle: "<<circle(a);
        break;
    
    case 2:
        cout<<"Enter Length: ";
        cin>>a;
        cout<<"Enter Breadth: ";
        cin>>b;
        cout<<"Area of Rectangle: "<<rectangle(a,b);
        break;
    
    case 3:
        cout<<"Enter Length: ";
        cin>>a;
        cout<<"Area of Square: "<<square(a);
        break;

    case 4:
        cout<<"Enter Base1: ";
        cin>>a;
        cout<<"Enter Base2: ";
        cin>>b;
        cout<<"Enter Height: ";
        cin>>c;
        cout<<"Area of Trapezium: "<<trapezium(a,b,c);
        break;
    
    case 5:
        cout<<"Enter Length: ";
        cin>>a;
        cout<<"Area of Cube: "<<cube(a);
        break;
    
    case 6:
        cout<<"Enter Radius: ";
        cin>>a;
        cout<<"Area of Sphere: "<<sphere(a);
        break;

    case 7:
        cout<<"Enter Base: ";
        cin>>a;
        cout<<"Enter Height: ";
        cin>>b;
        cout<<"Area of Parallelogram: "<<parallelogram(a,b);
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