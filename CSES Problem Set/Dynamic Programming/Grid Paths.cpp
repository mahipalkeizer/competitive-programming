#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
 
void test_case(){
    int n;cin>>n;
    vector<vector<int>> ans(n,vector<int> (n));
    string s;
 
    for(int i=0;i<n;i++){
        // cout<<i<<'\n';
        cin>>s;
        if(i==0 && s[0]!='*')
            ans[0][0]=1;
 
        for(int j=0;j<n;j++){
            if(s[j]!='*' && i>0){
                ans[i][j]+=ans[i-1][j];
            }
            if(s[j]!='*' && j>0){
                ans[i][j]+=ans[i][j-1];
            }
            ans[i][j]%=MOD;
        }
    }
    cout<<ans[n-1][n-1]<<'\n';
}
    
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}