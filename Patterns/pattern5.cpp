#include <bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i=n;i>=1;i--){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
    int n;
     cout<<"Enter the number of rows: ";
    cin>>n;
   
    print2(n);
}