// Multiply Two Matrices

#include <iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter Your MAtrix Row's and Col's - ";
    cin >> row >> col;

    int matrixA[row][col];
    int matrixB[row][col];
    int matrixC[row][col];


    cout << "Enter Your MAtrix A - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter Your Matrix B - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrixB[i][j];
        }
    }

    cout << "Your Matrix A - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrixA[i][j] << " ";
        }
        cout << "\n";
    }


    cout << "Your Matrix B - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrixB[i][j] << " ";
        }
        cout << "\n";
    } 

    cout << "Your Multiplication of Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
            cout << matrixC[i][j] << " ";
        }
        cout << "\n";
    }

}