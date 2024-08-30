#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string res="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u' && str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            res+=str[i];
        }
    }
    cout<<res<<endl;
    return 0;
}