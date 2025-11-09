// Prefix sum of Matrix 

#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Your Row and Column - ";
    cin >> row >> col;

    int matrix[100][100];
    int prefix[100][100] = {0}; 

    cout << "Enter Your Matrix - \n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nYour Matrix - \n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            int top = (i > 0) ? prefix[i - 1][j] : 0;
            int left = (j > 0) ? prefix[i][j - 1] : 0;
            int overlap = (i > 0 && j > 0) ? prefix[i - 1][j - 1] : 0;

            prefix[i][j] = matrix[i][j] + top + left - overlap;
        }
    }


    cout << "\nPrefix Matrix - \n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << prefix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
