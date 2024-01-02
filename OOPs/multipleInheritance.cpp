#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        int age;
        int weight;
    public:
        void bark(){
            cout<<"Animal can bark"<<endl;
        }
};
class Human{
    public:
        string color;
    public:
        void speak(){
            cout<<"Human can speak"<<endl;
        }
};
//multiple inheritance
class Hybrid:public Animal, public Human{
    // body
};
int main(){
    Hybrid d;
    d.speak();
    d.bark();
    return 0;
}