#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
        int health;
    public:
        char level;
        static int timeToCmplt ;
        static int random(){
            return timeToCmplt;
        }
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
int Hero::timeToCmplt = 20;
int main(){
    cout<<Hero::timeToCmplt<<endl;
    cout<<Hero::random()<<endl;
    return 0;  
}