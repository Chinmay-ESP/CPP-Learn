// Display Prime Numbers Between Two Intervals //

#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "Enter Your Range : ";
    cin >> a >> b;

    for(int num=a; num <= b; num++){
        if(num < 2)
            continue;

        int check = 0;
        for(int i=1; i <= num; i++){
            if(num % i == 0){
                check++;
            }

        }

        if(check == 2){
            cout << num << " -> Prime Number" << "\n";
        }
    }
}