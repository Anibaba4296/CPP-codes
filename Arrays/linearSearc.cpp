#include<bits/stdc++.h>
using namespace std;
bool isFound(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(isFound(arr,size,key)){
        cout<<"Element is Found"<<endl;
    }else{
        cout<<"Element is Not Found"<<endl;
    }
    return 0;
}