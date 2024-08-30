// write a code to Find the number that appears once, and the other numbers twice.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isfound=false;
    for(int i=1;i<n;i+=2){
        if(arr[i-1]!=arr[i]){
            cout<<arr[i-1];
            isfound=true;
            break;
        }
    }
    // cout<<isfound<<" ";
    if(!isfound){
        cout<<arr[n-1];
    }
    return 0;
}