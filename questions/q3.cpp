#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
//   cout<<(int) (floor (log2 (n))+1)<<endl;
  int k = (1 << (int) floor (log2 (n)) + 1) - 1;
  cout << (n ^ k);
}