#include<bits/stdc++.h>
using namespace std;

int main() {
   int arr[2][2] ={{1,7},{3,4}};
   int n=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++){
           if(arr[i][j] >n){
            n=arr[i][j];
           }
            
        }
    }
    cout<<n;
}
