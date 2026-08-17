#include <bits/stdc++.h>
using namespace std;
void print(int n){
    int mid = n/2 +1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(i==mid ||j==mid){
                cout<<"*"<<" ";
            }
            else 
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
