// Find Largest Number Among 3 Numbers //

#include <iostream>

using namespace std;

int main (){
    int a,b,c;

    cout << "Enter Your 3 Numbers : " << "\n";
    cin >> a >> b >> c;

    if(a < b && c < b){
        cout << b << " Is Greater than " << a << " & " << c;
    }
    else if(a < c && b < c ){
        cout << c << " Is Greater then " << a << " & " << b ;
    }
    else {
        cout << a << " Is Greater then " << b << " & " << c;
    }
}