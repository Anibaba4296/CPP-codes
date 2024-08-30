#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    // str = tolower(str);
    int vol=0,cont=0,sp=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            sp++;
        }else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U'){
            vol++;
        }else if(isalpha(str[i])){
            cont++;
        }
    }
    cout<<vol<<" "<<cont<<" "<<sp<<endl;
    return 0;
}