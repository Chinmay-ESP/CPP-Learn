// Calculate the Average of all the Elements Present in an Array // 

#include <iostream>

using namespace std;

int averge(int array[], int size){

    int avergeVal = 0;
    for(int i=0; i< size + 1; i++){
        avergeVal = avergeVal + array[i];
    }
    cout << "Average Value of Array : " <<  avergeVal;
}



int main(){

    int size;

    int *array1 = new int[size];

    cout << "Enter Your Size For the Array : ";
    cin >> size ;

    cout << "Enter Your Array : ";
    for(int i=0; i< size; i++){
        cin >> array1[i];
    }

    averge(array1, size);
    
}