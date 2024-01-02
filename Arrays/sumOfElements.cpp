#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[10000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements of the array : "<<sum<<endl;
}