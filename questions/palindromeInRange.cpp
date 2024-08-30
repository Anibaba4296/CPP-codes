#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n){
    int temp=n;
    int sum=0;
    while(temp!=0){
        int rem = temp%10;
        sum = sum*10 +rem;
        temp/=10;
    }
    if(sum==n){
        return true;
    }
    return false;
}
int main(){
    int rMin,rMax;
    cin>>rMin>>rMax;
    for(int i=rMin;i<=rMax;i++){
        if(isPalindrome(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}