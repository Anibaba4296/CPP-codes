#include<bits/stdc++.h>
using namespace std;
void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mindx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mindx]){
                mindx=j;
            }
        }
        if(mindx != i){
            swap(arr[i],arr[mindx]);
        }
    }
}
void printArray(int arr[], int n){
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
    printArray(arr,n);
    sortArray(arr,n);
    printArray(arr,n);
    return 0;
}