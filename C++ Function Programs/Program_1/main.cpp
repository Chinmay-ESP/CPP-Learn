// Display Prime Numbers Between Two Intervals Using Function //

#include <iostream>

using namespace std;


int primerange(int a, int b){

    for(int num=a; num<=b; num++){
        if(num < 2)
            continue;

        int check = 0;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                check++;
            }
        }

        if(check == 2){
            cout << num << " ";
        }
    }

}

int main(){
    int start,end;

    cout << "Enter Your Range Of Prime Number to be Print - ";
    cin >> start >> end ;
    cout << "Your Prime Numbers Range : ";
    primerange(start, end);

}