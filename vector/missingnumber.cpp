#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {0, 1, 3};

    int sum1 = 0,n=arr.size(),x;
    int sum2= n*(n+1)/2;
    //method 2
    for(int i =0;i<n;i++){
        sum1+=arr[i];
    }
    x = sum2 - sum1;
    cout<<x;
    
    // for(int i = 0; i < arr.size() + 1; i++) {

    //     bool flag = false;

    //     for(int j = 0; j < arr.size(); j++) {

    //         if(arr[j] == i) {
    //             flag = true;
    //             break;
    //         }
    //     }

    //     if(flag == false) {
    //         cout << i;
    //         break;
    //     }
    // }
}