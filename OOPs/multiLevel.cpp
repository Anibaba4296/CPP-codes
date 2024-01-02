#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        int age;
        int weight;
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};
class Dog:public Animal{
    // body 
};
class Pub:public Dog{
    //body
};
int main(){
    Pub d;
    d.speak();
    return 0;
}