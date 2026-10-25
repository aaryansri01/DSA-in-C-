#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Car{   //User Defined Data Type
public:
    string name;
    int power;
    float mileage;
    bool isE20compatible;
};
int main() {
    Car c1;
    c1.name = "Swift Vxi";
    c1.power = 118;
    c1.mileage = 9.2;
    c1.isE20compatible = true;

    Car c2 = {"Toyota Fortuner",200, 7.6,false};  // only in c++ jaise class likha h vaise hi likho

    cout<<c2.name<<" "<<c2.isE20compatible<<" "<<c2.power;
}