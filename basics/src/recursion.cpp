#include <iostream>
#include <vector>
#include <string>
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

// Sum of numbers from 1 to N using functional
int s4(int n){
    if (n == 0) {
        return 0;
    }
    return n + s4(n-1);
}
// Factorial N
int s5(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    return n*s5(n-1);
}

int s6(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return s6(n - 1) + s6(n - 2);
}

// Reversal of array
void reverse_array(vector<int>& ar) {
    int l = 0, r = ar.size() - 1;
    while (l < r) {
        swap(ar[l], ar[r]);
        l++;
        r--;
    }
}

int main(){
    int n;
    cin >> n;
    // f(1,n);
    // s(1,n);
    // s1(1,n);
    // s3(n,0);
    // cout << s5(n);
    // cout << s6(n);
    vector<string> ar;

    ar.push_back("Hello");



}