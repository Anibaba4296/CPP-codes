#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "takeuforward";
    string str2 = "forward";
    int foundIndx = str1.find(str2);
    cout<<foundIndx<<endl;
    // concatinate the string
    string str3 = str1+str2;
    cout<<str3<<endl;
    return 0;
}