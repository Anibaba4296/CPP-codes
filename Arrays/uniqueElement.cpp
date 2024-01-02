#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int res=arr[0];
    for(int i=1;i<size;i++){
        res = res^arr[i];
    }
    cout<<res<<endl;
    return 0;
}
