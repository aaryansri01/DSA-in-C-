#include <bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        //spaces
    for(int j=0;j<i;j++){
        cout<<" ";
        //stars
    }
        for(int j=0;j<2*n-(2*i+1);j++){
            
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            //spaces
            cout<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print(n);
}