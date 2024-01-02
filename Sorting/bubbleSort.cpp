// Bubble sort --> O(N^2);
#include<bits/stdc++.h>
using namespace std;
void sortArr(int arr[], int n){
    bool isChange=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isChange=true;
            }
        }
        if(isChange==false){
            break;
        }
    }
}
void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArr(arr,n);
    sortArr(arr,n);
    printArr(arr,n);
    return 0;
}