#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int size = v.size();
    float median;
    if(size%2==0){
        median =(float) (v[n/2]+v[n/2-1])/2;
    }else{
        median =(float) v[n/2];
    }
    cout<<median<<endl;
}