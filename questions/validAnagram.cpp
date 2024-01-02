// Anagram means both the strings must have same characters
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1="",str2="";
    cin>>str1>>str2;
    // we will take a array of size 26 as there are 26 character in alphabet
    int arr[26]={0};
    bool isAnagram=true;
    if(str1.length()!=str2.length()){
        isAnagram=false;
    }
    for(int i=0;i<str1.length();i++){
        int indx = str1[i]-'a';
        arr[indx]++;
    }
    for(int j=0;j<str2.length();j++){
        int indx = str2[j]-'a';
        arr[indx]--;
    }
    
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            isAnagram=false;
            break;
        }
    }
    if(isAnagram){
        cout<<"Both strings are Anagram"<<endl;
    }else{
        cout<<"Both stings are not Anagram"<<endl;
    }
    return 0;
}