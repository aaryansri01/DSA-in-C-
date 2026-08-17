#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5,target;
    bool flag = false;
    cout<<"enter integer";
    cin>>target;
    int arr[5]={1,2,6,7,3};
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag = true;
            break;
    }

}
if(flag==true)
    cout<<" Element is present "<<endl;
    else 
        cout<<"element not present"<<endl;
}
