// Print Character Pattern //

#include <iostream>

using namespace std;

int pattern1(int n){
    char A = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << A << " ";
        }
        cout << "\n";
        A++;
    }

}

int pattern2(int n){
    char A = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i+1; j++){
            cout << A << " ";
        }
        cout << "\n";
        A++;
    }
}


int pattern3(int n){
    char A = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        for(int k=1; k<=i; k++){
            cout << A << " "; 
        }
        cout << "\n";
        A++;
    }
}

int pattern4(int n){
    char A= 'A';
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        for(int k=1; k<= i; k++){
            cout << A << " ";
        }
        cout << "\n";
        A++;
    }
}


int pattern5(int n){
    char A = 'A';
    for(int i=1; i <= n; i++){
        for(int j=1; j<=n-i ;j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << A << " ";
        }
        cout << "\n";
        A++;
    }
}

int pattern6(int n){
    char A = 'A';
    for(int i=n; i>=1 ; i--){
        for(int j=1; j<=n-i; j++){
            cout << " " ;
        }
        for(int k=1; k<= i; k++){
            cout << A << " ";
        }
        cout << "\n";
        A++;
    }
}


int main(){
    int n=5;

    pattern1(n);
    cout << "\n";
    pattern2(n);
    cout << "\n";
    pattern3(n);
    cout << "\n";
    pattern4(n);
    cout << "\n";
    pattern5(n);
    cout << "\n";
    pattern6(n);


}