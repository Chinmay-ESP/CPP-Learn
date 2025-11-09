// Rotate Matrix Elements of a Matrix 

#include <iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter Your Matrix Row and Column - \n";
    cin >> row >> col;

    int matrix[100][100];
    int rotated[100][100];

    cout << "Enter Your Matrix - \n";

    for(int i=0; i<row; i++){
        for(int j=0; j<col ;j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Your Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            rotated[j][row-1-i] = matrix[i][j];
        }
    }

    cout << "Rotated Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << rotated[i][j] << " ";
        }
        cout << "\n";
    }
}