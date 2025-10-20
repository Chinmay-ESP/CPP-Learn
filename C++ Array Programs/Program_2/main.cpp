// Maximum and Minimum in an Array // 

#include <iostream>

using namespace std;


int findmaxmin(int array[], int size){
    int max = array[0];
    int min = array[0];

    for(int i= 0 ; i< size + 1; i++){
        if(array[i] > max) max = array[i];
        if(array[i] <  min) min = array[i];
    }
    cout << endl;
    cout << "Max. Value : " << max << "\n" << "Min. Value : " << min;
}

int main(){
    int size;

    cout << "Enter Your Size : ";
    cin >> size;

    int *array1 = new int[size];

    cout << "Enter Your Array : ";
    for(int i=0 ; i<=size; i++){
        cin >> array1[i];
    }

    cout << "Your Array : ";
    for(int i=0 ; i<=size; i++){
        cout << array1[i] << " ";
    }

    findmaxmin(array1, size);
}