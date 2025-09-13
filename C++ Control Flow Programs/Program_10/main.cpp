// Find LCM //

#include <iostream>

using namespace std;

int main (){
    int num, num1, lcm;

    cout << "Enter Your 1st Num : ";
    cin >> num;
    cout << "Enter Your 2nd Num : ";
    cin >> num1;

    for( int i=1; i>0 ; i++){
        if( i % num == 0 && i % num1 == 0 ){
            cout << "LCM : " << i;
            break;
        }

    }

}

