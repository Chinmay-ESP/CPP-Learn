// Copy All the Elements of One Array to Another in the Reverse Order // 

#include <iostream>

using namespace std;


void revArray(int array[], int rev[], int size){
    
    for(int i=0; i < size; i++){
        rev[i] = array[size - i -1];
    }

    for(int  i = 0; i< size; i++){
        cout << rev[i] << " ";
    }
}

int main(){
    int size;
    cout << "Enter Your Size : ";
    cin >> size;

    int *arr = new int[size];
    int *rev = new int[size];

    cout << "Enter Your Array - ";

    for(int i =0; i<size; i++){
        cin >> arr[i];
    }

    revArray(arr, rev, size);
}