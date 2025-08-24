// Calculate Area and Perimeter of Rectangle //

#include <iostream>

using namespace std;

float area(float length, float breadth){
    return(length*breadth);
}

float perimeter(float length, float breadth){
    return(2*(length + breadth));
}

int main(){
    float length, breadth;
    cout << "Enter Your Length and Breadth of Reactangle : ";
    cin >> length >> breadth;
    cout << "Area of Reactangle : " << area(length, breadth) << "\n"
         << "Perimeter of Reactangle : " << perimeter(length, breadth);
}