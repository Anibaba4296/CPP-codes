#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ele;
    cin>>ele;
    int res=-1;
    for(int i=0;i<n;i++){
        if(ele==v[i]){
            res=i;
            break;
        }
    }
    cout<<"Element found at index "<<res<<endl;
    return 0;
}