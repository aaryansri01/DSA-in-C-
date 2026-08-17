#include<bits/stdc++.h>
using namespace std;
//1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//1 6 15 20 15 6 1
//
//
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;

    }
    return fact;
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
int n;
cout<<"Enter no. of rows:"<<endl;
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<nCr(i,j)<<" ";
    }
    for(int j=0;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;
}
}
