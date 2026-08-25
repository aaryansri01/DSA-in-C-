#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1,3,3,8};
    int n= arr.size();
    int carry =0;
    vector <int> ans;
    for(int i=n=1;i>=0;i--){
            if(arr[n-1]!=9){
                arr[n-1] +=1;
            }
            else
            for(int i=0;i<n;i++){
                cout<<arr[n];
            }
    }

