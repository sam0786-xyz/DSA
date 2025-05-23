#include <iostream>
#include <vector>
using namespace std;

// Print Names N times using recursion
void f(int i,int n){
    if (i>n){
        return;
    }
    cout << "Sameer";
    f(i+1, n);
}

// Print consecutive numbers till N
void s(int i, int n){
    if (i>n){
        return;
    }
    cout << i;
    s(i+1,n);
}

// Print from N to i
void s1(int i, int n){
    if (i>n){
        return;
    }
    cout << n;
    s1(i,n-1);
}

// Sum of numbers from 1 to N
void s3(int i, int sum){
    if (i<1){
        cout << sum;
        return;
    }
    s3(i-1, sum+i);
}

int main(){
    int n;
    cin >> n;
    // f(1,n);
    // s(1,n);
    // s1(1,n);
    s3(n,0);
}