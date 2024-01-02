
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;
};

int main(){
    vector<vector<int>> graph = {{0,1,1},{1,0,0},{1,0,0}};
    cout<<graph[2][0]<<endl;
    return 0;
}