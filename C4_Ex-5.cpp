// 5. Accept a matrix of any order(according to the specification of the user). Then find the transpose of it.
#include<iostream>
using namespace std;
int main() 
{
    int a[10][10], t[10][10], r, c, i, j;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter Columns: ";
    cin >> c;

    cout << "Enter matrix elements: " << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Matrix elements: " << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "a[" << i << "][" << j << "]: " << a[i][j] << endl;
        }
    }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            t[j][i] = a[i][j];
        }

    cout << "Transpose Matrix: " << endl;
    for (i = 0; i < c; ++i) {
        for (j = 0; j < r; ++j) {
            cout << "a[" << i << "][" << j << "]: " << t[i][j] << endl;
        }
    }
    return 0;
}