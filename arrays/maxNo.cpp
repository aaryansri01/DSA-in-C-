#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int mx= INT_MIN;
    cout<<"enter array size"<<endl;
    cout<<max<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j])
            max=arr[i];
        else 
            max=arr[j];
}
    }
    cout<<"maximum number is"<<max<<endl;
*/
for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        
    }
    cout<<"maximum number is"<<max<<endl;
}
