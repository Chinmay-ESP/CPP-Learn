// Add Two Matrices //

#include <iostream>

using namespace std;



int main(){
    int row,col;

    cout << "Enter Your Row and Column - ";
    cin >> row >> col;

    int arrayA[row][col];
    int arrayB[row][col];
    int result[row][col];

    cout << "Enter Your Matrix-A :\n";
    for(int i =0; i<row; i++){
        for(int j = 0; j < col ; j++){
            cin >> arrayA[i][j];
        }
    }


    cout << "Enter Your Matrix-B :\n";
    for(int i =0; i<row; i++){
        for(int j = 0; j < col ; j++){
            cin >> arrayB[i][j];
        }
    }


    cout << "Your Matrix - A :\n";
    for(int  i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arrayA[i][j] << " ";
        }
        cout << "\n";
    }


    cout << "Your Matrix -B :\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col ;j++){
            cout << arrayB[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Addition of Matrix - \n";
    for(int i=0; i<row; i++){
        for(int j =0; j<col ;j++){
            result[i][j] = arrayA[i][j]+ arrayB[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}