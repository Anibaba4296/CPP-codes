#include<bits/stdc++.h>
using namespace std;
int minNum(int arr[],int size){
    int res=INT_MAX;
    for(int i=0;i<size;i++){
        res=min(res,arr[i]);
    }
    return res;
}
int maxNum(int arr[],int size){
    int res=INT_MIN;
    for(int i=0;i<size;i++){
        res=max(res,arr[i]);
    }
    return res;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Maximum element is : "<<maxNum(arr,size)<<endl;
    cout<<"Minimum element is : "<<minNum(arr,size)<<endl;
    return 0;
}