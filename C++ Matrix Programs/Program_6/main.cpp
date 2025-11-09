// Find the Determinant of a Matrix 

#include <iostream>

using namespace std;

int main(){

    int row, col;
    cout << "Enter Your Matrix Row and Col for only Sqaure Matrix - ";
    cin >> row >> col;

    int matrix[row][col];

    if(row != col){
        cout << "Your Row and Col are not Applicable Because It Applicable Only on Sqaure Matrix (2x2)(3x3)";
        return 1;
    }



    cout << "Enter Your Matrix : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Your Matrix : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int det =0 ;


    if(row == 2){
        det = matrix[0][0]*matrix[1][1] + matrix[0][1]*matrix[1][0];
        cout << "Matrix 2x2 Determinat is - " << det;
    }
    else if(row == 3){
         det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
            - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
            + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);
        cout << "Matrix 3x3 Determinat is - " << det;
    
    }
}