#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool isPalindrome=true;
    int left=0,right=str.length()-1;
    while(left<=right){
        if(str[left]!=str[right]){
            isPalindrome=false;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        cout<<"It is a Palindrome"<<endl;
    }else{
        cout<<"It is not a Palindrome"<<endl;
    }
    return 0;
}