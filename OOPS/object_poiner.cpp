#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average){
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
};
int main() {
    Cricketer c1("Virat Kohli",14000,58.1);
    Cricketer c2("Sachin Tendulkar Sir",18000,46.7);
    Cricketer c3("Rohit Sharms",11000,49.4);

    Cricketer* ptr = &c1;
    ptr-> average = 74.2; // (*ptr).average = 74.2;
    cout<<(*ptr).name<<endl;
    cout<<(*ptr).runs<<endl;
    cout<<(*ptr).average<<endl;
    cout<<c1.average<<endl;
}