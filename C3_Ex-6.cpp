// The value of sin(x) is given by the following expression Sin(x)=x-x3/3!+x5/5!-x7/7!...... Write a program to find out the sin of the given angle using this formula. Remember, the Value of x is in radians. You have to convert the given angle into radians before Calculations. The result must be accurate upto 6 decimal places.
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,fact,sign=-1;
	float x, p,sum=0;
	cout<<"Enter the value of x : ";
	cin>>x;
	cout<<"Enter the value of n (default = 10): ";
	cin>>n;

	for(i=1;i<=n;i+=2)
	{ 
		p=1;
        fact=1;
		for(j=1;j<=i;j++)
		{
			p=p*x;
			fact=fact*j;
		}
		sign=-1*sign;
		sum+=sign*p/fact;
	}
	cout<<"sin("<<x<<") = "<<sum;
	return 0;
}