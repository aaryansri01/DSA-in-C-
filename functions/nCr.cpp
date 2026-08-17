#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=5n;i++){
        fact *=i;

    }
    return fact;
}
int main(){
int n,r,nCr;
cout<<"Enter the value of n and r"<<endl;
cin>>n>>r;
nCr=fact(n)/(fact(r)*fact(n-r));
cout<<"The value of nCr is: "<<nCr<<endl;
}