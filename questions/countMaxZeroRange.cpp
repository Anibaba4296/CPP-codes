#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // code to find the maximum consecutive 1's 
    int cnt=0;
    int maxcnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxcnt = max(maxcnt,cnt);
    }
    cout<<"Mximm consecutive 1's are : "<<maxcnt<<endl;
    return 0;
}