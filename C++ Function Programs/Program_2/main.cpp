// Check Whether a Number Can be Express as Sum of Two Prime Numbers //


#include <iostream>
using namespace std;

bool checkPrime(int n){
    int check = 0, i = 1 ;
    while (i <= n)
    {
        if(n % i == 0){
            check ++;
        }
        i++;
    }
    if(check == 2){
        return true;
    }
    else{
        return false;
    }
    
}

void sumofprime(int n) {
    bool found = false;

    for (int i = 2; i <= n / 2; i++) {
        if (checkPrime(i) && checkPrime(n - i)) {
            cout << n << " = " << i << " + " << (n - i) << endl;
            found = true;
        }
    }

    if (!found) {
        cout << n << " cannot be expressed as the sum of two prime numbers.\n";
    }
}

int main() {
    int num;

    cout << "Enter Your Number: ";
    cin >> num;

    sumofprime(num);
}
