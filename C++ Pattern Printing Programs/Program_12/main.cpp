// Print Pascal's Triangle //

#include <iostream>

using namespace std;

int main(){
    int n=5;

    for(int i=1; i<=n; i++){
        int coef =1;
        for(int j=n-i; j>=1; j--){
            cout << " ";
        }
        for(int k=1 ; k<= i; k++){
            cout << coef << " ";
            coef = coef * (i-k)/k;
        }
        cout << "\n";
    }
}