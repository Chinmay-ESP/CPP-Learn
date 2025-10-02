// Find Factorial of a Number //

#include <iostream>

using namespace std;


int fact(int num){
    int result = 1;
    for (int i = 1 ; i <= num ; i++ ){
        result = result * i;
    }
    return(result);
}


int main(){

    int a;
    cout << "Enter Your Num : ";
    cin >> a;
    cout << fact(a);

}