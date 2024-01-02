// in this question we need to send the 0s at the end of the array.
#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    display(arr,n);
    int j=0;
    for(int i=0;i<n;i++){
        cin>>arr[j];
        if(arr[j]!=0){
            j++;
        }
    }
    display(arr,n);
    return 0;
}