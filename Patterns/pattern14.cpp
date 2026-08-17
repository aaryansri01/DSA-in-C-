#include <bits/stdc++.h>
using namespace std;
void print(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j ||i+j==n+1){
            cout<<"*"<<" ";
        }
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
