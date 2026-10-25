#include<bits/stdc++.h>
using namespace std;

int main() {
   int arr[][4] ={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
   int maxSum = INT_MIN, maxRow = -1;
   int minEle = INT_MAX;
       for(int i =0;i<3;i++){
            int sum =0;
       for(int j=0;j<4;j++){
            sum += arr[i][j];
       }
        if(sum> maxSum){
            maxSum= sum;
            maxRow = i;

        }
}
for(int j=0;j<4;j++){
    arr[maxRow][j];
    if(arr[maxRow][j] < minEle){
        minEle = arr[maxRow][j];
    }
}
cout<<minEle<<" "<<maxSum;
}