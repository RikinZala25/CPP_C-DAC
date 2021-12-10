// 3) Write a program to calculate the conversion between temperature in degrees to farenheit and farenheit to degrees. Use reference objects for returning object from the functions.
#include<iostream>
using namespace std;
class Temperature
{
	public:
	float fahren, celsius;
	float conversion(float f)
	{
		fahren=f;
		celsius=(fahren-32)* 5.0/9.0;
		return celsius;
	}
};
int main()
{
	Temperature t;
	float f;
	cout<<"Enter Temperature in Fahrenheit: ";
	cin>>f;
	cout<<"Temperature in Celsius: "<<t.conversion(f);
return 0;
}