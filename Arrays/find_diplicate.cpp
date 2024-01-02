#include<bits/stdc++.h>
using namespace std;
int method1(vector<int>&v,int size){
    int sumReq = ((size-1)*size)/2;
    int sumGiv=0;
    for(int i=0;i<size;i++){
        sumGiv+=v[i];
    }
    return sumGiv-sumReq;
}
// int method2(vector<int>&v,int size){
//     int res=0;
//     for(int i=0;i<size;i++){
//         res = res^v[i];
//     }
//     for(int i=1;i<size;i++){
//         res = res^v[i];
//     }
//     return res;
// }
int main(){
    int size;
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    // Method 1 usign sum calculation method
    cout<<"-------------------------\n"<<method1(v,size)<<endl;

    // method 2
    // cout<<"-------------------------\n"<<method2(v,size)<<endl;
    return 0;
}