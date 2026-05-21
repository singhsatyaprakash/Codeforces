#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<vector<int>>board(n,vector<int>(n,0));
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>board[i][j];
                map[board[i][j]]++;
            }
        }
        bool answered=false;
        for(auto it:map){
            if(it.second>n*(n-1)){
                cout<<"NO"<<endl;
                answered=true;
                break;
            }
        }
        if(!answered){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}