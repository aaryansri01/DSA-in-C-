#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int mn= INT_MAX;
    cout<<"enter array size"<<endl;
    cout<<mn<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j])
            mn=arr[i];
        else 
            mn=arr[j];
}
    }
    cout<<"maxinimum number is"<<mn<<endl;
*/
for(int i=0;i<n;i++){
        if(arr[i]<mn)
            mn=arr[i];
        
    }
    cout<<"mainimum number is"<<mn<<endl;
}
