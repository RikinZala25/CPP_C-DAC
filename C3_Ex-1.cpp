//Accept an array of numbers. Arrange then in ascending and descending order(this must take place inside of functions. Arrays must be passed as reference variable.

#include<iostream>
using namespace std;

int main() 
{
    int a[100], i = 0, j = 0, k = 0, n, temp;

    cout << "Enter Num of Array: ";
    cin >> n;

    for (i = 0; i < n; i++) 
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    // Ascending
    cout << "Ascending order: " << endl;
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << a[i] << endl;
    }

    // Descending
    cout << "Descending order: " << endl;
    for (i = n; i > 0; i--) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << a[i] << endl;
    }
    return 0;
}