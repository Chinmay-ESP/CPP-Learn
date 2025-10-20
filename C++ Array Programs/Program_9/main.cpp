// Prefix Sum Array // 

#include <iostream>

using namespace std;

void prefixsum(int array[], int prefix[], int size){
    prefix[0] = array[0];
    for(int i = 1; i < size; i++){
        prefix[i] = prefix[i - 1] + array[i];
    }
}


int main(){
    int size;
    cout << "Enter Your Size : ";
    cin >> size;

    int *array = new int[size];
    int *prefix = new int[size];

    cout << "Enter Your Elements : ";
    for(int i=0; i<size; i++){
        cin >> array[i];
    }

    prefixsum(array, prefix, size);

    cout << "Your Prefix Sum Array - ";
    for(int i =0 ; i< size ;i++){
        cout << prefix[i] << " ";
    }
    cout << endl;

    delete[] array;
    delete[] prefix;


}