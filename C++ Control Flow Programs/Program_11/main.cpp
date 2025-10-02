// Check Whether a Number is a Palindrome or Not //

#include <iostream>

using namespace std;

int main(){
    int num, rev_num = 0;

    cout << "Enter Your Number :";
    cin >> num;

    while(num > 0){
        rev_num = rev_num * 10 + num % 10;
        num = num /10 ;
    }


    if(num != rev_num ){
        cout << "It is a Palindrone Number";
    }
    else{
        cout << "It is not a Palindrone Number";
    }
}