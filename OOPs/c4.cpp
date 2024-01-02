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
    //parameterised constructor
    Hero(int health){
        this->health = health;
    }

    //getters and setters  
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
    Hero a(50);
    cout<<a.getHealth()<<endl;
    return 0; 
}