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
        cout<<"constructor says welcome"<<endl;
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
    ~Hero(){
        cout<<"Destructor in action"<<endl;
    }
};
int main(){
    Hero a(70,'C');
    cout<<a.getHealth()<<" "<<a.getLevel()<<endl;
    //copy constructor
    Hero b(80,'A');
    cout<<b.getHealth()<<" "<<b.getLevel()<<endl;
    // copy assignment operator 
    a=b;
    cout<<a.getHealth()<<" "<<a.getLevel()<<endl;
    cout<<b.getHealth()<<" "<<b.getLevel()<<endl;
    return 0;  
}