#include<bits/stdc++.h>
using namespace std;
// class hero
class Hero{
    // properties
    public:
        int health;
        char level;
        void print(){
            cout<<"level is : "<<level<<endl;
        }
};
int main(){
    // object for class hero
    Hero ram;
    ram.health = 90;
    ram.level = 'A';
    // cout<<"size of health "<<sizeof(h1)<<endl;
    cout<<"Health : "<<ram.health<<endl;
    ram.print();
    return 0;
}