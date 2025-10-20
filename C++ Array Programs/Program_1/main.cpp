// Check if Two Arrays Are Equal or Not // 

#include <iostream>
using namespace std;

// Bubble Sort function
void sortArray(int array[], int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Compare two arrays
bool compareArrays(int array1[], int array2[], int size) {
    for(int i = 0; i < size; i++) {
        if(array1[i] != array2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter Your Size for the Array: ";
    cin >> size;

    // Dynamic memory allocation (fixed)
    int* array1 = new int[size];
    int* array2 = new int[size];

    // Input Array 1
    cout << "Enter Your Array 1: ";
    for(int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    // Input Array 2
    cout << "Enter Your Array 2: ";
    for(int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    // Display arrays
    cout << "Your Array 1: ";
    for(int i = 0; i < size; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Your Array 2: ";
    for(int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    // Sort arrays
    sortArray(array1, size);
    sortArray(array2, size);

    cout << "Sorted Array 1: ";
    for(int i = 0; i < size; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Sorted Array 2: ";
    for(int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    // Compare arrays
    if(compareArrays(array1, array2, size)) {
        cout << "Both arrays are equal.\n";
    } else {
        cout << "Arrays are not equal.\n";
    }


}
