// Reverse a Sentence Using Recursion //

#include <iostream>
#include <string>

using namespace std;



string reverseString(string str, int start, int end){

    if (start >= end)
    {
        return str;
    }
    else{
        swap(str[start], str[end]);
        return(reverseString(str, start + 1, end - 1));
    }
}

int main(){
    string input, reverse;

    cout << "Enter Your String : ";
    cin >> input;
    reverse = reverseString(input, 0, input.length()-1);
    cout << "Reversed String : " << reverse << "\n";

}