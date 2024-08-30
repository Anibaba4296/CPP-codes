#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={0,0,1,1,1,1,2,3,3,4};
    // given a non-decreasing order array. remove the elemnts that are repeated more than two times and print the number of elemets elemets left in the array after the task;
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(count<2 || nums[i] > nums[count-2]){
            nums[count]=nums[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}