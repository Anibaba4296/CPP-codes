#include<bits/stdc++.h>
using namespace std;
// class hero
class Hero{
    // properties
    private:
        int health;
    public:
        char level;
        void print(){
            cout<<"level is : "<<level<<endl;
        }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHeath(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    // object for class hero
    Hero ram;
    // ram.health = 90;
    ram.setHeath(80);
    ram.level = 'A';
    // cout<<"size of health "<<sizeof(ram)<<endl;
    cout<<"Health : "<<ram.getHealth()<<endl;
    ram.print();
    return 0;
}