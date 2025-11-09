// Check Whether Two Matrices Are Equal or Not // 

#include <iostream>

using namespace std;



int main(){
    int row, col;

    cout << "Enter Your Row and Column - ";
    cin >> row >> col;

    int arrayA[row][col];
    int arrayB[row][col];
    bool check = true;

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


    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arrayA[i][j] != arrayB[i][j]){
                check = false;
                break;
            }
        }
    }

    if(check  == true){
        cout << "Both Matrix are Equal ";
    }
    else{
        cout << "Both Matrix are not Equal";
    }


}