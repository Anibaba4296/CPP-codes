#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        double n,a,r;
        cin>>n>>a>>r;
        double res = a*(1-pow(r,n))/(1-r);
        cout<<res<<setprecision(6)<<endl;
    }
	return 0;
}