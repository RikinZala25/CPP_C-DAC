// There is class called student. The attributes of the student class are as follows:
// marks[5]-integer //it is an array. We need marks of five different subjects
// stud_name-character-20
// roll no-integer
// total-integer
// average-float
// grade-character - 1
// Write a program to accept the details of students. The number of students must be accepted from the user. There must provisions for the following:
// a Adding student details
// b. Deleting student details
// c. Modifying student details
// d. Searching student details
// e. Printing the report of all existing students While accepting student, the following things must be calculated and stored properly
// Total marks
// Average marks
// Grade
// Grade can be calculated as follows:
// Average >= 90-A
// Average >= 80- - B
// Average >= 40--D
// Average < 40--0
// The program must be menu driven one. Remember, if we modify the marks of a student, the total, average and grade must be calculated again and stored. The report must contain the following details;
// Student name, roll number, total marks, average marks and grade
#include<iostream>
using namespace std;
const char* findGrade(float [], int);
class student
{
    public:

    int roll_no, marks[5], total;
    char grade, stud_name[20];
    float average;
    
    void add_new();
    void del();
    void mod();
    void search();
    void print();
};
void student::add_new()
{
    int i;
    cout<<"Enter Name: ";
    cin>>stud_name;
    cout<<"Enter Roll Num: ";
    cin>>roll_no;
    cout<<"Enter Marks for Each Subject:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"Enter S["<<i<<"]: "<<endl;
        cin>>marks[i];
    }
}
void student::del()
{
    // NO need to decleare anything here case 2 contains all    
}
void student::mod()
{
    // NO need to decleare anything here case 3 contains all 
}
void student::search()
{  
    // NO need to decleare anything here case 4 contains all
}
void student::print()
{
    int i;
    float sum=0;
    for(i=0; i<5; i++)
    {
       sum = sum+marks[i]; 
    } 
    average = sum/5;
    
    if(average>=90)
    {
        grade='A';
    }
    else if(average>=80)
    {
        grade='B';
    }
    else if(average>=40)
    {
        grade='C';
    }
    else if(average<40)
    {
        grade='O';
    }
    cout<<stud_name<<'\t'<<roll_no<<'\t'<<marks[0]<<'\t'<<marks[1]<<'\t'<<marks[2]<<'\t'<<marks[3]<<'\t'<<marks[4]<<'\t'<<average<<'\t'<<grade<<endl;
}
int main()
{
    student s[10];
    int a,b,i,n,c,x;
    cout<<"Enter Entries: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].add_new();
    }
    retry:
    cout<<"Enter 1 - add new entries \n2 - delete entries \n3 - modify entries \n4 - search entries \n5 - print entries"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        int n_e;
        cout<<"Number of entities to input: ";
        cin>>n_e;
        for(i=n;i<n+n_e;i++)
        {
            s[n+i].add_new();
        }
        cout<<"Name"<<'\t'<<"Roll"<<'\t'<<"S1"<<'\t'<<"S2"<<'\t'<<"S3"<<'\t'<<"S4"<<'\t'<<"S5"<<'\t'<<"Avg"<<'\t'<<"Grade"<<endl;
        for(i=0;i<n;i++)
        {
            s[i].print();
        } 
        for(i=n;i<n+n_e;i++)
        {
            s[n+i].print();   
        }
        break;
    
    case 2:
    {
        int n_d,a;
        cout<<"Enter Roll Number to delete entity: ";
        cin>>n_d;;

        cout<<"Name"<<'\t'<<"Roll"<<'\t'<<"S1"<<'\t'<<"S2"<<'\t'<<"S3"<<'\t'<<"S4"<<'\t'<<"S5"<<'\t'<<"Avg"<<'\t'<<"Grade"<<endl;
        for(i=0;i<n;i++)
        {
            if(n_d==s[i].roll_no)
            {
                s[i].roll_no = 0;
                if(s[i].roll_no!=0)
                {
                    s[i].print();
                }
            }
            else
            {
                s[i].print();
            }
        }
        break;
    }

    case 3:
    {
        int n_m,z;
        cout<<"Enter Roll Number to Modify: ";
        cin>>n_m;

        for(i=0;i<n;i++)
        {
            if(n_m-1==s[i].roll_no)
            {
                z = n_m-1;
                for(i=0;i<5;i++)
                {
                    cout<<"Enter S["<<i<<"]: "<<endl;
                    cin>>s[z].marks[i];
                } 
            }
        }
        for(i=0;i<n;i++)
        { 
            s[i].print();
        }
        break;
    }

    case 4:
    {
        int n_s;
        cout<<"Enter Roll Number to Search: ";
        cin>>n_s;
        for(i=0;i<n;i++)
        {
            if(n_s == s[i].roll_no)
            {
                s[i].print();
            }
        }
        break;
    }

    case 5:
    {
        cout<<"Name"<<'\t'<<"Roll"<<'\t'<<"S1"<<'\t'<<"S2"<<'\t'<<"S3"<<'\t'<<"S4"<<'\t'<<"S5"<<'\t'<<"Avg"<<'\t'<<"Grade"<<endl;
        for(i=0;i<n;i++)
        {
            s[i].print();
        } 
    }

    default:
        break;

    }
    
    cout<<"\nDo you want to continue?(1 - yes, 2 - no): ";
    cin>>c;
    if(c==1)
    {
        goto retry;
    }
    else
    {
        return 0;
    }
    
    return 0;
}