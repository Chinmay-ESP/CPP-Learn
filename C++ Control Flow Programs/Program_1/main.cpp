// Check Number is Even or Odd //

#include <iostream>

using namespace std;

int main (){
    int num ;
    cout << "Enter Your Number to Check Odd or Even : ";
    cin >> num ;
    if(num % 2 == 0 ){
        cout << "Your Number : " << num << " Is Even " ;
    }
    else{
        cout << "Your Number : " << num << " Is Odd ";
    }
}