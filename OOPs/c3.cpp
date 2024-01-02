#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
        int health;
    public:
        char level;
        void print(){
            cout<<"level is : "<<level<<endl;
        }
    // default constructor
    Hero(){
        cout<<"constructor says welcome"<<endl;
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
    // static allocation
    Hero a;
    a.setHeath(70);
    a.setLevel('B');
    cout<<"Level : "<<a.level<<endl;
    cout<<"Health : "<<a.getHealth()<<endl;
    // dynamic allocation
    Hero *b = new Hero;
    b->level = 'A';
    b->setHeath(90);
    cout<<"Level : "<<(*b).level<<endl;
    cout<<"Health : "<<b->getHealth()<<endl;

    return 0;
}