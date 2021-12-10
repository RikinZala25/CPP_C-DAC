// 1)You are assigned to count the number of vehicles in a city for a statistical survey. At Any given time, you must be able to give the umber of vehicles in that city along with their register numbers. Use a static variable 'count and a static method 'get_count' for doing this. Create an array of objects. And check whether the get_count method is working by adding or deleting the vehicles. Before each process, le a vehicle enters into the city or leaves from the city, the count of the vehicles must be shown. Use dynamic allocation method.
#include<iostream>
using namespace std;
class vehicle
{
    public:
    int reg_num;
    static int count;
    static int get_count();
    void input();
};
void vehicle::input()
{
    cout<<" Enter Registration Num: ";
    cin>>reg_num;
    count++;
}
int vehicle::get_count()
{
    return count;
}
int vehicle::count;
int main()
{
    vehicle v[3];
    v[1].input();
    cout<<"Number of Vehicles: "<<vehicle::get_count()<<endl;
    v[2].input();
    cout<<"Number of Vehicles: "<<v[2].get_count()<<endl;
    v[3].input();
    cout<<"Number of Vehicles: "<<vehicle::get_count()<<endl;
    return 0;
}