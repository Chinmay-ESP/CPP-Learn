// Print Triangle Pattern // 

#include <iostream>

using namespace std;

int triangle1(int n){

    for(int i=1; i<=n ;i++){
        for(int j=n-i; j>0; j--){
            cout << " ";
        }
        for(int k=1; k<=i ; k++){
            cout << "* ";
        }
        cout << "\n";
    }
}




int main(){
    int n =5;

    triangle1(n);

}