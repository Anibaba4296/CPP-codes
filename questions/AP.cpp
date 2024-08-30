#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,d;
    cin>>n>>a>>d;
    int res;
    res = (n/2)*(2*a+((n-1)*d));
    cout<<res<<endl;
    return 0;
}