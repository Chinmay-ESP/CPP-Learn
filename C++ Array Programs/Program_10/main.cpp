// Rotate the Array D times // 

#include <iostream>

using namespace std;

void rotate(int array[], int size, int D){
    int temp[size], k =0;
    for(int i = D; i < size ; i++){
        temp[k] = array[i];
        k++;
    }

    for(int i=0; i<D; i++){
        temp[k] = array[i];
        k++;
    }

    cout << "Your Rotated Array - ";
    for(int i = 0; i < size; i++){
        array[i] = temp[i];
        cout << array[i] <<" ";
    }
}

int main(){

    int size, D;

    cout << "Enter Your Size and D value to rotate : ";
    cin >> size >> D;

    int *arr = new int[size];

    cout << "Enter Your Array - ";
    for(int i = 0 ;i< size; i++){
        cin >> arr[i];
    }

    rotate(arr, size, D);



}