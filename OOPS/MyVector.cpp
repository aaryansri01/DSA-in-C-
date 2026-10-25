#include<bits/stdc++.h>
#include<vector>
using namespace std;
class MyVector{    // User Defined Data Structure
    public:
    int length; // itne elements 
    int* arr;
    MyVector(int capacity, int default_value);
};
int main() {
    MyVector v(5,-1); // vector <int> v(5,-1)

    //int arr[5];
    int* arr = new int [5];
    arr[0] = 10; arr[1] = 20;

    int b[] = {67,21};
    arr = b;

    cout<<arr[0]<<endl;
} 