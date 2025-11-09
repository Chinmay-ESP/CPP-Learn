// Compute the Sum of Diagonals of a Matrix //

#include <iostream>

using namespace std;

int main(){

    int row, col;
    int rightdia = 0, leftdia = 0;



    cout << "Enter Your Row and Column - ";
    cin >> row >> col;

    int array[row][col];

    cout << "ENter Your Matrix - \n";
    for(int i =0; i<row; i++){
        for(int j = 0; j < col ; j++){
            cin >> array[i][j];
        }
    }



    cout << "Your Matrix - :\n";
    for(int  i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }


    for(int  i= 0; i<row; i++){
        rightdia += array[i][i];
        leftdia += array[i][col-i-1];
    }

    cout << "Sum of Right Diagonal (Main Diagonal) - " << rightdia << "\n";
    cout << "Sum of Left Diagonal (Secondary Diagonal) - " << leftdia << "\n";



}