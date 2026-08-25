#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
vector<int> v={0,1,0,1,0,0,1,1,1,0};
    int zeros=0,ones =0;
    for(int i=0;i<v.size();i++){
        if(v[i] == 0)   zeros++;
        else  ones++;
    }
    for(int i =0;i<zeros ;i++){
    v[i]=0;}
for(int i =zeros;i<arr.size();i++){
    arr[i] = 1;
}
}

