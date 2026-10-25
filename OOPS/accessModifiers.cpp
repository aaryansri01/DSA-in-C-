#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Cricketer{
    private:
        int runs;
    public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average){
        this->name = name;
        this->average = average;
    }
    void print(){
        cout<<name<<endl;
    cout<<runs<<endl;
    cout<<average<<endl;
    }
};
int main() {
    Cricketer c("Virat Kohli",14000,58.1);
    cout<<c.name<<endl;
    cout<<c.average<<endl;
    cout<<c.runs<<endl;
}