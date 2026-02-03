#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }

    int kth_score=nums[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]>=kth_score && nums[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
}