// Print a 2D Array // 

#include <iostream>

using namespace std;

int main(){
    int row, col;

    cout << "Enter 2D Array Row and Column : ";
    cin >> row >> col;

    int array2D[100][100];

    cout << "Enter Your 2D Array : \n";

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> array2D[i][j];
        }

    }

    cout << "Your 2D Array : \n";
    for(int i=0; i< row; i++){
        for(int j=0; j<col; j++){
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }


}