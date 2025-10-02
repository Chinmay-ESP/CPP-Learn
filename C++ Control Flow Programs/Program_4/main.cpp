// Check if a Given Year is a Leap Year //

#include <iostream>

using namespace std;

int main(){
    int year ;
    cout << "Enter Your Year : ";
    cin >> year;
    
    if ( year % 4 == 0){
        cout << year << " Yes, It is a Leap Year";
    }
    else {
        cout << year << " No, It is not a Leap Year";
    }

}