/*Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20×20 grid?*/
#include<iostream>
using namespace std;
int main()
{
int n = 20;
    long matrix[n][n];
    for (int i = 0; i < n; i++) {
        matrix[i][0] = i + 2;
        matrix[0][i] = i + 2;
    }
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {      // j>=i
            matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
            matrix[j][i] = matrix[i][j];   // avoids double computation (difference)
        }
    }
    cout<<matrix[n - 1][n - 1]<<endl;
}
