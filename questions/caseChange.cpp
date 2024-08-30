#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="";
    getline(cin,str);
    // cin>>str;
    for(int i=0;i<str.length();i++){
        // int value = (int)str[i];
        
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = tolower(str[i]);
        }else if(str[i]>='a' && str[i]<='z'){
            str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}