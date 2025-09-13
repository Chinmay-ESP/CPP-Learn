// Calculate Sum of First n Natural Numbers // 

#include <iostream>

using namespace std;

int main(){
    int num, sum= 0;
    cout << "Enter Your Num : ";
    cin >> num;

    for(int i = 1 ; i <= num ; i++ ){
        sum = sum + i;
    }
    cout << "Your Total Sum of Natural Numbers : " << sum;
}