#include<bits/stdc++.h>
using namespace std;
bool  isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPerfect(n)){
        cout<<"It is a perfect number"<<endl;
    }else{
        cout<<"It is not a perfect number"<<endl;
    }
    return 0;
}