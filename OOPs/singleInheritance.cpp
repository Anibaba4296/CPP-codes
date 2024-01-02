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
int main(){
    Dog d;
    d.speak();
    return 0;
}