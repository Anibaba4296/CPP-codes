#include<bits/stdc++.h>
using namespace std;
string solution(string arr[], int N){
    sort(arr,arr+N);    // here we will sort the array 
    string frst = arr[0];   // element with smallest size
    string lst = arr[N-1];  // element with largest size
    string str = "";    // string to store the output
    for(int i=0;i<frst.length();i++){
        if(frst[i] == lst[i]){
            str += frst[i];
        }else{
            break;
        }
    }
    if(str == ""){
        return "-1";
    }else{
        return str;
    }
}
int main(){
    int N;
    cin>>N;
    string arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<solution(arr,N)<<endl;    // final result
    for(int i=0;i<N;i++){   // printing the sorted array
        cout<<arr[i]<<" ";
    }

}