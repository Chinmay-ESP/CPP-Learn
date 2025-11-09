// Interchange Elements of First And Last Rows in Matrix 

#include <iostream>

using namespace std;

int main(){
    int row,col;
    cout << "Enter Your Row and Column - ";
    cin >> row >> col;

    int matrix[100][100];

    cout << "Enter Your Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Your Matrix -\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int temp;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            temp = matrix[0][j];
            matrix[0][j] = matrix[row-1][j];
            matrix[row-1][j] = temp;
        }
    }

    cout << "Changed Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}