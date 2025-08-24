// Convert Fahrenheit to Celsius // 

#include <iostream>

using namespace std;

double ftemp(double value){
    return((value - 32.0) * (5.0/9.0));
}

int main (){
    double a;
    cout << "Enter Your F temp : " ;
    cin >> a ;
    cout << "Your Converted C temp : " << ftemp(a) << "\n";
}