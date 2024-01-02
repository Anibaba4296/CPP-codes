#include<bits/stdc++.h>
using namespace std;
int manin(){
    int age;
    cin>>age;
    try{
        if(age>=18){
            cout<<"You are adult"<<endl;
        }else{
            throw(age);
        }
    }catch(int age){
        cout<<"You have stil"
    }
    return 0;
}