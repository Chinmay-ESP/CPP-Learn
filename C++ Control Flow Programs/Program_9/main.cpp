// Find GCD(Greatest Comman Divisor) //

#include <iostream>

using namespace std;

int main (){
    int num, num1, gcd;
    cout << "Enter Your 1st Num : ";
    cin >> num;
    cout << "Enter Your 2nd Num : ";
    cin >> num1;

    for(int i = 1 ; i <= num ; i++){

        if(num % i == 0 && num1 % i == 0){
            gcd = i;
        }
    }
    cout << "Your GCD Number : " << gcd;
}

