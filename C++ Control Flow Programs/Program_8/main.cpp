// Reverse a Number //

#include <iostream>

using namespace std;


int main(){
    int num, rev_num = 0;

    cout << "Enter Your Number : ";
    cin >> num;

    while(num > 0){
        rev_num = rev_num * 10 + num % 10 ;
        num = num / 10 ;
    }
    cout << "Your Reversed Number  : " << rev_num;
}