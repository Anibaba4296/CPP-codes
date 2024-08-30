/*
                                Minimum Deletions to Make String Balanced

You are given a string s consisting only of characters 'a' and 'b'​​​​.
You can delete any number of characters in s to make s balanced. s is balanced if there is no pair of indices (i,j) such that i < j and s[i] = 'b' and s[j]= 'a'.
Return the minimum number of deletions needed to make s balanced. write the code into best possible time complexity.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    int count=0;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(!st.empty() && (st.top()=='b' && s[i]=='a')){
            st.pop();
            count+=1;
        }else{
            st.push(s[i]);
        }
    }
    cout<<count<<endl;
    return 0;
}