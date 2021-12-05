// 3. What will be the output of the following program. Verify it by keying it in the computer. Explain the results.

// Question

// #include<iostream>
// using namespace std;
// int x = 15;
// int main() 
// {
//     cout << "The value of x:" << x << endl;
//     int x = 20;
//     cout << "Now the value of x is:" << x << endl;
//     int x = 25;
//     cout<<"The value of x in the inner block :" << x << endl;
//     cout<<"The value of global x:" << x << endl;
//     cout<<"The value of x in the outer block :" << x << endl;
//     int x = 30;
//     cout<<"The value of x in the innermost block :" << x <<endl;
//     cout << "The value of global x:" << x << endl;
// }


// Corrected Answer
#include<iostream>
using namespace std;
int x = 15;
int main() 
{
    cout << "The value of x:" << ::x << endl;
    int x = 20;
    {
        cout << "Now the value of x is:" << x << endl;
        int x = 25;
        cout<<"The value of x in the inner block :" << x << endl;
        cout<<"The value of global x:" << ::x << endl;
        {
            cout<<"The value of x in the outer block :" << x << endl;
            int x = 30;
            cout<<"The value of x in the innermost block :" << x <<endl;
            cout << "The value of global x:" << ::x << endl;
        }
    }
}
// Reason & Explaination
// We can access a global variable using scope resolution operator (::) when there is a local variable with same name