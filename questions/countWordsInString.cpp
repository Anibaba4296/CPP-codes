#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int sp=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            sp++;
        }
    }
    cout<<sp+1<<endl;
    return 0;
}