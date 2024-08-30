#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0,y=1;
    while(y!=n){
        if(arr[x]!=arr[y]){
            arr[x+1]=arr[y];
            x++;
            y++;
        }else{
            y++;
        }
    }
    for(int i=0;i<=x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}