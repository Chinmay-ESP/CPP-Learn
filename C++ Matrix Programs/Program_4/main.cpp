// Print Boundary Elements of a Matrix // 

#include <iostream>

using namespace std;

int main(){
    int row, col;

    cout << "Enter Your Matrix Row and Column - ";
    cin >> row >> col ;

    int array[row][col];

    cout << "Enter Your Matrix - ";
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> array[i][j];
        }
    }


    cout << "Your Matrix - ";
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << array[i][j] << " ";
    
        } 
    cout << endl;
    }


    cout << "Your Boundary Element of mAtrix - \n";

    for(int  i=0; i<row; i++){
        for(int j=0; j< col; j++){
            if(i == 0 || j == 0 || i == row - 1 || j == col - 1){
                cout << array[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}