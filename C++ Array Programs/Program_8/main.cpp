// Remove All Occurrences of an Element in an Array // 

#include <iostream>
using namespace std;

void newArray(int array[], int& size, int target) {
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] != target) {
            array[j++] = array[i];
        }
    }

    size = j; 

    cout << "Your Updated Array - ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size, target;

    cout << "Enter Your Size: ";
    cin >> size;

    int* array = new int[size]; 

    cout << "Enter Your Elements in the Array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter Your Target to Remove: ";
    cin >> target;

    newArray(array, size, target);

    delete[] array; 
    return 0;
}
