// Print Number Pattern without reassigning //

#include <iostream>

using namespace std;

int pattern1(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout <<j << " ";
        }
        cout << "\n";
    }
}

int pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

int pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i; j++){
            cout << "  ";
        }
        for(int k=1; k<=i; k++){
        cout << k << " ";
        }
        cout << "\n";
    }
}



int pattern4(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<= n-i; j++){
            cout << "  ";
        }
        for(int k=1; k<=i; k++){
        cout << k << " ";
        }
        cout << "\n";
    }
}


int pattern5(int n){
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for(int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        for(int l = i - 1; l >= 1; l--) {
            cout << l << " ";
        }
        cout << "\n";
    }
}



int pattern6(int n){
        for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for(int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        for(int l = i - 1; l >= 1; l--) {
            cout << l << " ";
        }
        cout << "\n";
    }
}


int main(){
    int n=5;
    pattern1(n);
    cout << "\n";
    pattern2(n);
    cout << "\n";
    pattern3(n);
    cout << "\n";
    pattern4(n);
    cout << "\n";
    pattern5(n);
    cout << "\n";
    pattern6(n);
    cout << "\n";


}