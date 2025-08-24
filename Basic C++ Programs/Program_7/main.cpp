// Multiply Two Floating-Point Numbers //

#include <iostream>

using namespace std;

float floatmul(float a , float b){
    return(a*b);
}

int main(){

    float a , b;
    cout << "Enter your Floating Numbers : " << "\n";
    cin >> a >> b;
    cout << "Result : " << floatmul(a , b) << "\n" ;

}