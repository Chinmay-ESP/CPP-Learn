// Find nth Fibonacci Number // 

#include <iostream>

using namespace std;


int main(){
    int a;

    cout << "Enter Your Number : ";
    cin >> a;

    int t0 = 0, t1 = 1, nexterm;

    cout << "Nth Fibonacci Number Series :";

    for(int i = 1; i <= a; i++){
        cout << t0 << "->";
        nexterm = t0 + t1;
        t0 = t1;
        t1 = nexterm;
    }

}    
    
