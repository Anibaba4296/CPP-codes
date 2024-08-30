#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0;i < n ; ++i) {
        cin>>arr[i];
    }
    cout<<"Data set we have is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the key to search : ";
    cin>>key;
    int res = linearSearch(arr,n,key);
    if(res == -1){
        cout<<"Key not matched"<<endl;
    }else{
        cout<<"key is matched at index "<<res<<endl;
    }
    return 0;
}