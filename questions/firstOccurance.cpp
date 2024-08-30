#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res=-1;
    int ele;
    cin>>ele;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(ele>v[mid]){
            low=mid+1;
        }else if(ele<v[mid]){
            high=mid-1;
        }else{
            if(mid==0 || v[mid-1]!=v[mid]){
                res=mid;
                break;
            }else{
                high=mid-1;
            }
        }
    }
    cout<<"Element is found at index "<<res<<endl;
    return 0;
}