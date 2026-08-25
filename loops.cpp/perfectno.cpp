#include <bits/stdc++.h>
using namespace std;
// Write a program to find if a given positive integer is a Perfect Number. A perfect number
// is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
// is a positive divisor of the number, excluding the number itself.)
// Sample 1 — Input: 28 ⇒ Output: Perfect Number
// (Explanation: Since 1 + 2 + 4 + 7 + 14 = 28)
// Sample 2 — Input: 12 ⇒ Output: Not a Perfect Number
// (Explanation: Since 1 + 2 + 3 + 4 + 6 = 16 ̸= 12)
int main() {
    int n = 12,sum = 0;
    // cout<<"enter number";
    // cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum +=i;
        }
    }if(sum == n){
        cout<<n<<" is perfect number.";
    }
    else cout<<n<<" is not  a perfect number.";
}