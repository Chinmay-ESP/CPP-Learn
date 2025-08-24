// Swap two numbers //

#include <iostream>

using namespace std;

int main(){
    int a,b,temp;
    cout << "Enter Your Numbers : " << "\n";
    cin >> a >> b;
    cout << "Before Swapping : " << "A : " << a << " B :" << b << "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping : " << "A : " << a << " B :" << b << "\n";
}