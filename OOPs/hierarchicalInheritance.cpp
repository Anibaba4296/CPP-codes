#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        void funA(){
            cout<<"Class A"<<endl;
        }
};
class B:public A{
    public:
        void funB(){
            cout<<"Class B"<<endl;
        }
};
class C:public A{
    public:
        void funC(){
            cout<<"Class C"<<endl;
        }
};
int main(){
    A obj1;
    obj1.funA();

    B obj2;
    obj2.funA();
    obj2.funB();

    C obj3;
    obj3.funA();
    obj3.funC();
    return 0;
}