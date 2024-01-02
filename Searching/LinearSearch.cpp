#include<bits/stdc++.h>
using namespace std;
int findIndx(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
void printArr(int arr[],int size){
    cout<<"["<<arr[0];
    for(int i=1;i<size;i++){
        cout<<","<<arr[i];
    }
    cout<<"]"<<endl;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArr(arr,size);
    int key;
    cin>>key;
    int res = findIndx(arr,size,key);
    if(res>=0){
        cout<<"Element if found at "<<res<<" index"<<endl;
    }else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}