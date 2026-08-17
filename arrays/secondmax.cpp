#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5,mx1=INT_MIN,mx2 = INT_MIN;
    int arr[5]={1,2,6,7,10};
    for(int i=0;i<n;i++){
        if(arr[i]>mx1){
            mx1 = arr[i];
    }
}
for(int i=0;i<n;i++){
    if(arr[i]>mx2 && arr[i] !=mx1){
        mx2 = arr[i];
    }
}
    cout<<mx2<<endl;
    cout<<mx1<<endl;
}
