// Calculate the Factorial of a Number Using Recursion // 

#include <iostream>

using namespace std;


int fact(int n){
    int result = 1;
    for(int i=1; i<= n; i++){
        result = result * i;
    }
    cout << result ;
}


int recursiveFact(int n){
    if(n <= 1){
        return n;
    }
    else{
        return(n * recursiveFact(n - 1));
    }
}

int main(){
    int num;

    cout << "Enter Your Number : ";
    cin >> num;
    cout << "Factorial Using Simple Loop : ";
    fact(num);
    cout << endl;
    cout << "Factorial Using Recursive Method : "  << recursiveFact(num);
    

}