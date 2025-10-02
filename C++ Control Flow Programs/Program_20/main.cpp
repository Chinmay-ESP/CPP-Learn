// Display Factors of a Natural Number //

#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int num;
    cout << "Enter Your Natural Number : ";
    cin >> num;
    cout << "Factors Of Natural Number : " ;
    for(int i=1 ; i<= num ; i++){
        if(num % i == 0){
            cout << " "<< i;
        }
    }
    
}