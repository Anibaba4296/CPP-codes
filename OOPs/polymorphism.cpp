#include<bits/stdc++.h>
using namespace std;
//compile time polumorphism --> function oveloading | operator overloading
//1. function overloading
// class A{
//     public:
//         void sayHello(){
//             cout<<"Hello Anibaba"<<endl;
//         }
//         void sayHello(string name){
//             cout<<"Hello "<<name<<endl;
//         }
//         //2. operator oveloading
//         void operator()(){
//             cout<<"hi"<<endl;
//         }
// };
// int main(){
//     A obj;
//     obj.sayHello();
//     obj.sayHello("Ani");
//     obj();
//     return 0;
// }

// run-time polymorohism
// 1. method overriding / function overriding
// method overriding is possible only via inheritance; function name and arguments must be same is both the classes 
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    Dog d;
    d.speak();
}
