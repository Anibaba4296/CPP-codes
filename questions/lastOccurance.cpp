#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=-1;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
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
            if(mid==n-1 || v[mid]!=v[mid+1]){
                res=mid;
                break;
            }else{
                low=mid+1;
            }
        }
    }
    cout<<"Element found at index "<<res<<endl;
    return 0;
}