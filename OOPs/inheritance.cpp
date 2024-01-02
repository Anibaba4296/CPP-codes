#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
            return this->age;
        } 
        void setWeight(int weight){
            this->weight = weight;
        }
};
class Male:public Human{
    public:
        string color;
        void sleep(){
            cout<<"Male sleeping"<<endl;
        }
};
int main(){
    Male m1;
    cout<<m1.age<<" "<<m1.color<<endl;
    m1.sleep();
    m1.setWeight(54);
    cout<<m1.weight<<endl;
    return 0; 
}