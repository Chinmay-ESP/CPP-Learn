// Check Armstrong Number //

#include <iostream>

using namespace std;

int main(){
    int num , last = 0, sum= 0;
    cout << "Enter Your Number : ";
    cin >> num;
    int original = num;

    while(num > 0){
       last = num % 10;
        sum += last*last*last;
        num = num /10;
    }

    if(original == sum){
        cout << "It is a Armstrong Number.";
    }
    else{
        cout << "It is not a Armstrong Number";
    }


}