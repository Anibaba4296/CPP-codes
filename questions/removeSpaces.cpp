#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string res="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            res+=str[i];
        }
    }
    cout<<res<<endl;
    return 0;
}