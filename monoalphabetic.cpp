#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[26]={'K','R','Y','P','T','O','S','A','B','C','D','E','F','G','H','I','J','L','M','N','Q','U','V','W','X','Z'};
    string text="DAVINCICODE";
    string res="";
    int n=text.size();
    for(int i=0;i<n;i++){
        int temp=text[i]-'A';
        res+=arr[temp];
    }
    cout<<res<<endl;
    return 0;
}