#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>data;
    int count=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        data.push_back({a,b,c});
    }
    for(int i=0;i<n;i++){
        int temp=0;
        if(data[i][0]==1) temp++;
        if(data[i][1]==1) temp++;
        if(data[i][2]==1) temp++;
        if(temp>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}