#include <bits/stdc++.h>
using namespace std;
void print(int n){
   // 1
   // A B 
   // 1 2 3
   // A B C 
   // 1 2 3 4
   for(int i =1;i<=n;i++){
    for(int j=0;j<i;j++){
        if(i%2==0){
            cout<<char('A'+j)<<" ";
        }
        else{
            cout<<j+1<<" ";
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