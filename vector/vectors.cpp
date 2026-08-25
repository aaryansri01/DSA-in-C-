#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
vector<int> arr(5,-1);// index 0 to 4
int n = arr.size();
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
arr.push_back(5); // adds an element at end
arr.push_back(14);
arr.pop_back(); //removes last element
arr.push_back(7);
cout<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}