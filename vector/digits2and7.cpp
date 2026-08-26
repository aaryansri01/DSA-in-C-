#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Q22. Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit
// 7, or both, anywhere within their numerical representation.
// Sample — Output includes: 2, 7, 12, 17, 20, 21, 22, ...
int main() {
    int digits =0;
    for(int i=1;i<=500;i++){
    int temp = i;
    bool found = false ;
    while ( temp > 0) {
        int digit = temp % 10;
            if( digit == 2 || digit == 7) {
                found = true ;
                break ;
            }
        temp /= 10;
    }
if( found ) cout << i << " ";
    }
}