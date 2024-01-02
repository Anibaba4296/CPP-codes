#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        void funA(){
            cout<<"class A"<<endl;
        }
};
class B{
    public:
        void funB(){
            cout<<"class B"<<endl;
        }
};
class C:public A, public B{
    public:
        void funC(){
            cout<<"class C"<<endl;
        }
};
class D:public B{
    public:
        void funD(){
            cout<<"class D"<<endl;
        }
};
int main(){
    A a;
    a.funA();
    cout<<"-----------------------------------"<<endl;

    B b;
    b.funB();
    cout<<"-----------------------------------"<<endl;

    C c;
    c.funA();
    c.funB();
    c.funC();
    cout<<"-----------------------------------"<<endl;

    D d;
    d.funB();
    d.funD();
    cout<<"-----------------------------------"<<endl;
    return 0;
}