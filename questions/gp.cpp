#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,r,n;
    cin>>a>>r>>n;
    float res;
    res = (a*(pow(r,n)-1))/(r-1);
    cout<<res<<endl;
    return 0;
}
