// Check Whether a Number is Prime or Not //

#include <iostream>

using namespace std;

int main(){

    int num, check = 0, i = 1;
    cout << "Enter Your Number : ";
    cin >> num;

    while(i <= num){
        if(num % i == 0){
            check++;
        }
        i++;
    }
    
    if(check == 2){
        cout << "It is a Prime Number.";
    }
    else {
        cout << "It is not a Prime Number.";
    }
    

}