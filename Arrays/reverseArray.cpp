#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Actuall array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
    cout<<"Reversed array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}