#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int size=str.size();
        if(size<=10){
            cout<<str<<endl;
        }
        else{

            string temp="";
            temp+=str[0];
            temp+=to_string(size-2);
            temp+=str[size-1];
            cout<<temp<<endl;
        }
    }
    return 0;
}