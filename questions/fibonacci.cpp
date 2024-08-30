#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0,second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=2;i<=n;i++){
        int sum = first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
    cout<<endl;
    return 0;
}