#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Student{   //User Defined Data Type
public:
    string name;
    int roll;
    float cgpa;
    Student(string n,int r, float c){
        name = n;
        roll = r;
        cgpa =c;

    }
};
int main() {
    Student x;   // x is an object/variable
    x.name = "Aaryan";
    x.roll = 03;
    x.cgpa = 7.9;

    Student y;   // y is an object/variable
    y.name = "Sumit";
    y.roll = 10;
    y.cgpa = 7.2;
    
    cout<<x.name<<" "<<x.roll<<" "<<x.cgpa;
}