#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlt(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArr(arr,size);
    swapAlt(arr,size);
    printArr(arr,size);
    return 0;
}