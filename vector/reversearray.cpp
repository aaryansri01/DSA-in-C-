#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    vector<int> arr = {10,20,30,40,50,60,70};
    int i=0,j= arr.size()-1;
    while(i<j){
    
        reverseArray(arr, i, j);
        i++;
        j--;
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i]<<" ";
    }
}