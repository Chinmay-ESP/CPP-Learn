// Find the Normal and Trace of Matrix 

#include <iostream>
#include <math.h>

using namespace std;

void normal(int matrix[][100], int row, int col){

    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += matrix[i][j]*matrix[i][j];
        }
    }
    cout << "Normal of Matrix - " << sqrt(sum) <<"\n";
}



void trace(int matrix[][100], int row, int col){
    int trace = 0 ;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                trace += matrix[i][j];
            }
        }
    }

    cout << "Tarce of Matrix - " << trace << "\n";
}

int main(){

    int row,col;

    cout << "Enter Your Matrix Row and Column - ";
    cin >> row >> col;

    int matrix[100][100];

    cout << "Enter Your Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
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

    normal(matrix, row, col);
    trace(matrix, row, col);

    return 0;
}