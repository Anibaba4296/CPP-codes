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
    Hero(int health, char level){
        this->health = health;
        this->level = level;
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
    Hero a(70,'C');
    cout<<a.getHealth()<<" "<<a.getLevel()<<endl;
    //copy constructor
    Hero b(a);
    cout<<b.getHealth()<<" "<<b.getLevel()<<endl;
    return 0;  
}