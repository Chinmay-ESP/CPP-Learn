// C++ Program To Print Reverse Floyd's Triangle //

#include <iostream>

using namespace std;

int pattern1(int n){
    int count = n * (n + 1) / 2;

    for (int i = n; i >= 1; i--) {
        int temp = count - i + 1;
        for (int j = 1; j <= i; j++) {
            cout << temp << "  ";
            temp++;
        }
        count -= i;
        cout << endl;
    }
}



int main(){
    int n = 5;
    
    pattern1(n);
    cout << endl;
   // pattern2(n);
    cout << endl;
}