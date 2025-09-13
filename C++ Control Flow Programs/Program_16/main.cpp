// Display Armstrong Numbers Between 1 to 1000 // 

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num, temp, digits, sum, last;
    cout << "Armstrong Number from 1 to 1000 : ";

    for(int i=1; i<=1000; i++){
        temp = i;
        digits = 0;
        sum = 0;
    
    int temp2 = temp;
    while(temp2 != 0){
        digits++;
        temp2 = temp2 / 10;
    }

    temp2 = temp;
    while (temp2 != 0)
    {
        last = temp2 % 10;
        sum += pow(last, digits);
        temp2 = temp2 / 10;
    }

    if(sum == i){
        cout << i << "\n";
    }    
    }
}