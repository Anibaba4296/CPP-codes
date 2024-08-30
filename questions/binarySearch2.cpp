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
        if(v[mid]==ele){
            res=mid;
            break;
        }else if(v[mid]<ele){
            low=mid+1;
        }else if(v[mid]>ele){
            high=mid-1;
        }
    }
    cout<<"Element is present at index "<<res<<endl;
    return 0;
}