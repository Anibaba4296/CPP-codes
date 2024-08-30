#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int res=0;
    int temp=0;
    for(int i=0;i<n;i++){
        temp=temp+a[i]-b[i];
        cout<<temp<<" ";
        res=max(res,temp);
        cout<<res<<" at step "<<i+1<<endl;
    }
    cout<<res<<endl;
    return 0;
}