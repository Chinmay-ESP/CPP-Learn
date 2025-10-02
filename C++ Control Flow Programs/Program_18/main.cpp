// Sum of Fibonacci Numbers at Even Indexes up to N Terms //

#include <iostream>

using namespace std;

int main(){

    int a;
    cout << "Enter Your Nth Number Of Fibonacci Series : ";
    cin >> a;

    int t0 = 0, t1 = 1, nextterm, sum =0;
    for(int i=0 ; i< a ; i++){

        if(i % 2 == 0){

        sum += t0;

        }


        nextterm = t0 + t1;
        t0 = t1;
        t1 = nextterm;
    }

    cout << sum;



}