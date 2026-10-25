#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Fraction{   //User Defined Data Type
public:
    int num;
    int den;
    Fraction(int num, int den){
        this->den = den;
        this->num = num;
    }
    Fraction(){
        
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){
        num = num *f.num;
        den = den * f.den;
    }
    void add(Fraction f){
        num = num * f.den + den * f.num;
        den = den * f.den;
    }
};

Fraction multiply(Fraction f1, Fraction f2){
    Fraction res;
    res.num = f1.num * f2.num;
    res.den = f1.den * f2.den;
    return res;
}
int main() {
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.print();
    f1.multiply(f2);  
    f1.add(f2);   //f1 mme f2 multiply kardo
    f1.print();
}