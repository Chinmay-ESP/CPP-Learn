// Find the Sum of Natural Numbers using Recursion // 


#include <iostream>

using namespace std;



int sumof(int n){

    int sum = 0;
    for(int i=0 ; i<=n; i++){
        sum = sum + i;
    }
    cout << sum ;
}


int recurSum(int n){
    if(n <= 1){
        return n;
    }
    else{
        return(n + recurSum(n-1));
    }
}

int main(){
    int num;
    cout << "Enter Your Natural Number : ";
    cin >> num;
    cout << "Result Using Normal Loop : ";
    sumof(num);
    cout << endl;
    cout << "Result Using Recursive Method : " << recurSum(num);

}