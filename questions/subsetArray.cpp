#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,3,4,5,2};
    int arr2[]={2,4,3,1,7,5,15};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    bool isSubset=true;
    if(m>n){
        isSubset=false;
    }
    map<int,bool>mp;
    for(int i=0;i<n;i++){
        mp[arr2[i]]=true;
    }
    for(int i=0;i<m;i++){
        if(mp[arr1[i]]==false){
            isSubset=false;
            break;
        }
    }
    cout<<isSubset<<endl;
    return 0;
}