#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=arr[1]-arr[0];
    int minVal=arr[0];
    for(int i=1;i<n;i++){
        res = max(res,arr[i]-minVal);
        minVal = min(minVal,arr[i]);
    }
    cout<<res<<endl;
    return 0;
}