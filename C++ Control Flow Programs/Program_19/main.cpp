// Calculate the Power of a Number//

#include <iostream>
#include <cmath>

using namespace std;


int main(){

    double base, expo, result;

    cout << "Enter Your Base and Exponential : ";
    cin >> base >> expo;

    result = pow(base , expo);

    cout << "Your Result : " << result;
}