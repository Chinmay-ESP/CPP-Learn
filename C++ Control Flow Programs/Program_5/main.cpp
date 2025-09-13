// Print Multiplication Table of a Number //

#include <iostream>

using namespace std;

int main (){
    int num, result;
    cout << "Enter Your Number : ";
    cin >> num ;

    cout << "Your Table : " << "\n";

    for(int i = 1 ; i <= 10 ; i++){
        result = num * i;
        cout << result << "\n";
    }   
}