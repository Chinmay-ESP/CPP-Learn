// Calculate Power Using Recursion // 


#include <iostream>

using namespace std;

int recursive(int num, int pow){

    if(pow == 0){
        return 1;
    }
    if(num == 0){
        return 0;
    }
    return(num * recursive(num, pow -1));
}

int main(){
    int num, pow, result;
    cout << "Enter Your Number and Power  : ";
    cin >> num >> pow;

    result = recursive(num, pow);
    cout << "Power Using Recursive : " << result;
}
