#include <bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5 8 13...
int main() {
    int a=0,b=1,c=0,n,fib=0;
    cout<<" enter number of terms";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        c = a+b;
        b=a;
        a=c;
        
    }

}