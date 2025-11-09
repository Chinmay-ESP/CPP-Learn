// Find the transpose of a matrix 

#include <iostream>

using namespace std;



int main(){
    int col, row;

    cout << "Enter Your Row and col : ";
    cin >> row >> col ;

    int array[row] [col];

    cout << "Enter Your Matrix  : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> array[i][j];
        }
    }

    cout << "Enter Your MAtrix : \n";
    for(int i=0; i<row; i++){
        for(int  j=0; j<col; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Your Transpose Matrix : \n" ;
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << array[j][i] << " ";
        }
        cout << "\n";
    }



}