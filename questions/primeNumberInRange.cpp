#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int rmin,rmax;
    cin>>rmin>>rmax;
    for(int i=rmin;i<=rmax;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}