// Find Common Array Elements // 

#include <iostream>

using namespace std;

void commonElements(int arrayA[], int arrayB[], int sizeA, int sizeB){

    cout << "Comman Elements : ";

    for(int i=0; i< sizeA; i++){
        for(int j=0; j < sizeB; j++){
            if(arrayA[i] == arrayB[j]){
            bool caught = false;
            for(int k =0 ; k < i; k++){
                if(arrayA[k] == arrayA[i]){
                    caught = true;
                    break;
                }
            }
        if(!caught){
            cout << arrayA[i] << " ";
        }

        }
        }
    }


}


int main(){
    int sizeA, sizeB;

    cout << "Enter Your Array Size's : ";
    cin >> sizeA >> sizeB;

    int *arrayA = new int[sizeA];
    int *arrayB = new int[sizeB];


    cout << "Enter Your Array - A : ";
    for(int i=0; i<sizeA; i++){
        cin >> arrayA[i];
    }

    cout << "Enter Your Array - B : ";
    for(int i=0; i<sizeB; i++){
        cin >> arrayB[i];
    }


    commonElements(arrayA, arrayB, sizeA, sizeB);

    delete[] arrayA;
    delete[] arrayB;

    return 0;
}