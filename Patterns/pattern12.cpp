#include <bits/stdc++.h>
using namespace std;
void print(int n, int m){/*
     ***********
     *         *
     *         *
     *         *    
     ***********
     */
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        if(i==1||i==m||j==1||j==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}
    int main (){
    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    print(n, m);

}