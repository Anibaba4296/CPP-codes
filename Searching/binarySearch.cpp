// binary search
#include<bits/stdc++.h>
using namespace std;
bool isFound(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==key){
            return true;
        }else if(key>arr[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return false;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool res = isFound(arr,size,key);
    cout<<res<<" ";
    if(res){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}