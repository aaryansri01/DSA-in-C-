#include <bits/stdc++.h>
using namespace std;
// prime number 2,3,5,7,11,13
int main() {
    int n = 1,count=0;
    for(int i =1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count ==2){
        cout<<n<<" is prime number";
    }
    else {
        printf(" not prime");
    }

}