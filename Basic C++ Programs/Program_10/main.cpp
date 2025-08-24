// Calculate Simple Interest & Compound Interest //

#include <iostream>
#include <cmath>

using namespace std;

float simpleI(float P, float T, float R){

        return((P*T*R) / (100));
}

float compoundI(float P, float T, float R) {
    float amount = P * pow((1 + R / 100), T); // Correct formula
    return (amount - P);
}


int main(){

    float P, T, R;
    cout << "Enter Your Parameter For Simple and Compound Interest" << "\n";
    cout << "Principal Amount : ";
    cin >> P;
    cout << "Time :";
    cin >> T;
    cout << "Rate of Interest : ";
    cin >> R;
    cout << "Simple Interest : " << simpleI(P, T, R) << "\n";
    cout << "Compound Interest : " << compoundI(P, T, R) << "\n";

}