// Check Neon Numbers in a Given Range //

#include <iostream>
#include <cmath>

using namespace std;



int main(){

    int num, sqr;
    cout << "Enter Your Number : ";
    cin >> num;

    sqr = (num * num);
    int front = 0, last = 0, neo = 0;

    for(int i = 1; i <= sqr; i++){
        last = sqr % 10;
        front = sqr / 10;
        neo = last + front;
    }

    if(neo == num){
        cout << "It is a Neon Number.";
    }
    else{
        cout << "It is not a Neon Number.";
    }
    
}