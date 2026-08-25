#include<bits/stdc++.h>
#include<vector>
using namespace std;
//  void change(vector <int> v){
//     v[2] = 99;       // pass by value
//  }
 void change(vector <int> & v){
    v[2] = 99;             // pass by reference 
 }
int main() {
    vector<int> v ={4,3,8,2,9};
    change(v);
    cout<<v[2]<<endl;
}