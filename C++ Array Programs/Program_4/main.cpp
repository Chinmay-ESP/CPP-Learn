// Merge Two Arrays // 

#include <iostream>
#include <string>
 
using namespace std;


void merge(string arrayA[], string arrayB[], int sizeA, int sizeB){
    string merged [sizeA + sizeB];

    for(int i=0; i< sizeA; i++){
        merged[i] = arrayA[i];
    }

    for(int i=0; i< sizeB; i++){
        merged[sizeA + i] = arrayB[i];
    }

    cout << "Merged Two Array : ";
    for(int i=0; i < sizeA + sizeB; i++){
        cout << merged[i] << " ";
    }

}

int main(){
    int sizeA, sizeB;
    cout << "Enter Your Size For Array - A : ";
    cin >> sizeA;
    string *arrayA = new string[sizeA];
    cout << "Enter Your Size For Array - B : ";
    cin >> sizeB;
    string *arrayB =  new string[sizeB];

    cout << "Enter Your Names[Array - A] : ";
    for(int i=0; i< sizeA; i++){
        cin >> arrayA[i];
    }

    cout << "Enter Your Names[Array - B] : ";
    for(int i=0; i< sizeB; i++){
        cin >> arrayB[i];
    }

    cout << "Your Two Array's\n ";
    cout << "Array A : ";
    for(int i=0; i< sizeA; i++){
        cout << arrayA[i] << " ";
    }
    cout << endl;
    cout << "Array B : ";
    for(int i=0; i< sizeB; i++){
        cout << arrayB[i] << " ";
    }
    cout << endl;

    merge(arrayA, arrayB, sizeA, sizeB);


    
}