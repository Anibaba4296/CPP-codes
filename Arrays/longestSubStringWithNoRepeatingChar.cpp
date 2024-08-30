#include<bits/stdc++.h>
using namespace std;
int longestSubString(string str){
    int l=0;
    int maxLen=0;
    unordered_set<char>ch;
    for(int r=0;r<str.length();r++){
        while(ch.find(str[r])!=ch.end()){
            ch.erase(str[l]);
            l++;
        }
        ch.insert(str[r]);
        maxLen = max(maxLen,r-l+1);
    }
    return maxLen;
}
int main(){
    string str;
    cin>>str;
    cout<<"Output : ";
    int res = longestSubString(str);
    cout<<res<<endl;
    return 0;
}