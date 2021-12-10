// Write a program to accept the details of players of a football-team. Each player object must have the following attributes:
// name, matches played, goals scored average goals per match. A report must be printed in the following format:
#include<iostream>
using namespace std;
class team
{
    public:
    char name[20];
    int m_p, goals;
    float avg_goals;

    void input();
    void output();
};
void team::input()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Matches Played: ";
    cin>>m_p;
    cout<<"Enter Goals Scored: ";
    cin>>goals;
    cout<<"Enter Avegrage Goals per Match: ";
    cin>>avg_goals;
}
void team::output()
{
    cout<<name<<'\t'<<m_p<<'\t'<<'\t'<<goals<<'\t'<<'\t'<<avg_goals<<endl;
}
int main()
{
    team ob;
    int i,n;
    cout<<"Enter number of Entries: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        ob.input();
    }
    cout<<"Name"<<'\t'<<"Matches Played"<<'\t'<<"Goals Scored"<<'\t'<<"Average Goals Per Match"<<endl;
    for(i=0;i<n;i++)
    {
        ob.output();
    }
    return 0;
}