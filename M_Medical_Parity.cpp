#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    //enter no. of test case
    cin>>t;
    for(int i=0;i<t;i++){
        //enter x
        string x;
        cin>>x;
        //enter y
        string y;
        cin>>y;
        //solution

        int n=x.size();
        vector<int> leftone(n, 0);
        if(x[0]=='1') leftone[0]=1;
        for(int i=1;i<n;i++){
            if(x[i]=='1'){
                leftone[i]=leftone[i-1]+1;
            }
            else{
                leftone[i]=leftone[i-1];
            }
        }
        int yflip=0;
        for(int i=n-1;i>=0;i--){
            // if y is one means odd leftone need...
            if(y[i]=='1' && leftone[i]%2==0){ //even found then need to flip as we need odd count of one
                yflip++;
            }
            else if(y[i]=='0' && leftone[i]%2!=0){
                yflip++;
            }
        }
        int xflip=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(x[i]=='1') count++;
            //if count is odd it means y should 1...
            if(count%2!=0 && y[i]!='1'){//we need a flip on x...
                if(x[i]=='0') count++;
                else count--;
                xflip++;
            }
        }
        cout<<min(yflip,xflip)<<endl;
    }
    return 0;
}