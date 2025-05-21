#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //Extracting digits
    // int N;
    // cout << "Give the number: ";
    // cin >> N;
    // while (N!=0){
    //     int last_digit = N%10;
    //     cout << last_digit;
    //     N = N/10;
    //     cout << "\n";
    // }

    //Reverse a number
    // int N;
    // cout << "Give a number to reverse: ";
    // cin >> N;
    // int rev = 0;
    // while (N!=0){
    //     int last_d = N%10;
    //     rev = (rev*10)+last_d;
    //     N = N/10;
    // }
    // cout << rev;

    //Palindrome
    // int N;
    // cout << "Give a number to check: ";
    // cin >> N;
    // int dup = N;
    // int rev = 0;
    // while( N!=0){
    //     int last_d = N%10;
    //     rev  = (rev*10)+last_d;
    //     N = N/10;
    // }
    // cout << ((rev == dup) ? "Yes" : "No");

    //Armstrong
    // int N;
    // cout << "Give a number to check: ";
    // cin >> N;
    // int dup = N;
    // int temp = N;        
    // int digits = 0;
    // while (temp != 0) {
    //     digits++;
    //     temp /= 10;
    // }
    // int sum = 0;
    // temp = N;        
    // while (temp != 0) {
    //     int last_digit = temp % 10;
    //     sum += pow(last_digit, digits);
    //     temp /= 10;
    // }
    // cout << ((sum == dup) ? "Yes" : "No") << endl;

    //Prime Number
    // int N;
    // int ct = 0;
    // cout << "Give a number to check: ";
    // cin >> N;
    // for (int i = 1; i*i <= N; i++){
    //     if (N%i==0){
    //         ct ++;
    //         if ((N/i)!= i) {
    //             ct++;
    //         }
    //     }
    // }
    // cout << ((ct == 2) ? "Yes, it is a prime number" : "No, it is not"); 
     
    //GCD OR HCF
    // int N1, N2, min,gcd;
    // cout << "Give a 1st number: " << "\n";
    // cin >> N1;
    // cout << "Give a 2nd number: " << "\n";
    // cin >> N2;

    // min = (N1 < N2) ? N1 : N2;
    // for (int i=1; i<=min; i++){
    //     if (N1%i==0 && N2%i==0){
    //         gcd = i;
    //     }
    // }
    // cout << "GCD is " << gcd;
    // return 0;
}