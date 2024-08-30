// two are said to be in anagram if they contain the same character. character order may or may not be same.
// eg:
//      Input:a = geeksforgeeks, b = forgeeksgeeks
//      Output: YES
//      Explanation: Both the string have same characters with
//         same frequency. So, both are anagrams.

//-------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="",b="";
    cin>>a>>b;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // now we have sorted the array
    if(a == b){
        cout<<"a and b are ANAGRAM"<<endl;
    }else{
        cout<<"a and b are NOT ANAGRAM"<<endl;
    }
}