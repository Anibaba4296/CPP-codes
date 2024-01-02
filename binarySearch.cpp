#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int first=0,last = n-1;
    while(first <= last){
        int mid = (first+last)/2;
            return mid;
        }else if(key > arr[mid]){
            first = mid+1;
        }else{
            last = mid-1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Data set available : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the key : ";
    cin>>key;
    int result = binarySearch(arr,n,key);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element present at "<<result<<" index"<<endl;
    }
}