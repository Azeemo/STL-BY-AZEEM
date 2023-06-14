// CODEFORCES 1811 A Problem
#include<bits/stdc++.h>                     
using namespace std;                   
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,d;cin>>n>>d;
        string str1;cin>>str1;
   
        int k=1;
        for(int i=0;i<n;i++){
            if(str1[i]-'0'>=d){
                cout<<str1[i];
            }else{
                if(k==1){
                    cout<<d<<str1[i];
                    k++;
                }else{
                    cout<<str1[i];
                }
            }
        }
        if(k==1) cout<<d;
        cout<<endl;
    }
}
