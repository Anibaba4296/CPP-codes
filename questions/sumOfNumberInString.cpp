#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int res=0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            res+= str[i]-'0';
        }
    }
    cout<<res<<endl;
    return 0;
}   