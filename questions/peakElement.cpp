// Find the peak elements in the array
#include<bits/stdc++.h>
using namespace std;
void peakElement(int arr[], int n){
    if(n==1){
        cout<<arr[0];
    }else{
        if(arr[0]>=arr[1]){
            cout<<arr[0]<<" ";
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
                cout<<arr[i]<<" ";
            }
        }
        if(arr[n-1]>=arr[n-2]){
            cout<<arr[n-1]<<" ";
        }
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
    peakElement(arr,n);
    return 0;
}