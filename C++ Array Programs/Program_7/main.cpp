// Remove Duplicate Elements From an Array // 

#include <iostream>


using namespace std;


int checkDuplicate(int arrayA[], int size){

    if(size == 0 || size == 1)
        return size;
    
    int j = 0;
    for(int i=0; i< size - 1; i++){
        if(arrayA[i] != arrayA[i+1] ){
            arrayA[j++] = arrayA[i];
        }
    }
    arrayA[j++] = arrayA[size - 1]; 
    return j;


}

int main(){

    int arrayA[] = {1,2,2,3,4,4,5};

    int sizeA = sizeof(arrayA)/sizeof(arrayA[0]);

    sizeA = checkDuplicate( arrayA, sizeA);

    cout << "Your Updated Array - ";
    for(int i =0 ; i< sizeA; i++){
        cout << arrayA[i] << " ";
    }
}