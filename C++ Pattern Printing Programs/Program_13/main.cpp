// Print Floyd's pattern Triangle Pyramid // 

#include <iostream>

using namespace std;

int pattern1(int n){
        int count=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << count << "  ";
            count++;
        }
        cout << "\n";
    }
}




int main(){

    int n =5;
    pattern1(n);
    cout << endl;

}