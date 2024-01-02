#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"I am A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"I am B"<<endl;
    }
};
class C: public A, public B{
    //body
};
int main(){
    C c;
    // c.fun();  // this will give error 
    c.A::fun();
    c.B::fun();
    return 0;
}