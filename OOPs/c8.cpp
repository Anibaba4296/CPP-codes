#include<bits/stdc++.h>
using namespace std;
// encapsulation
class Student{
    private:
        string name;
        int age;
        int height;
    public:
        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age = age;
        }
};
int main(){
    Student one;
    one.setAge(21);
    cout<<"Age : "<<one.getAge()<<endl;
    cout<<"Working Properly"<<endl;
    return 0;
}