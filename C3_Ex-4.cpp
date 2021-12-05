//Write a program to accept an array of words and arrange them in ascending and descending order. All the three arrays must be printed. Make use of the dynamic allocation (using new operator). Apply the technique of reference variables also.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[200], ch, m;
    int i, j, len;
    cout<<"Enter the String: ";
    gets(str);
    len = strlen(str);

    cout<<"1 - Ascending & 2 - Descending: ";
    cin>>m;

    switch(m)
    {
        case 1:
        {
            for(i=0; i<len; i++)
            {
                for(j=0; j<(len-1); j++)
                {
                    if(str[j]>str[j+1])
                    {
                        ch = str[j];
                        str[j] = str[j+1];
                        str[j+1] = ch;
                    }
                }
            }
            cout<<"\nString in Ascending Order: "<<str;
            break;
        }


        case 2:
        {
            for(i=1; i>len; i--)
            {
                for(j=0; j<(len-1); j++)
                {
                    if(str[j]>str[j+1])
                    {
                        ch = str[j];
                        str[j] = str[j+1];
                        str[j+1] = ch;
                    }
                }
            }
            cout<<"\nString in Ascending Order: "<<str;
            break;
        }
        
    }
    // for(i=0; i<len; i++)
    // {
    //     for(j=0; j<(len-1); j++)
    //     {
    //         if(str[j]>str[j+1])
    //         {
    //             ch = str[j];
    //             str[j] = str[j+1];
    //             str[j+1] = ch;
    //         }
    //     }
    // }
    // cout<<"\nString in Ascending Order: "<<str;
    cout<<endl;
    return 0;
}