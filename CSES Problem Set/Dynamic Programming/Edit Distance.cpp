#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void printv( const vector<int> v){
    for(int x:v)
        cout<<x<<' ';
    cout<<'\n';
}
void addself(int &x,int ad){
    x+=ad;
    if(x>=MOD)x-=MOD;
}
 
 
void test_case(){
    string a,b;cin>>a>>b;
    int n,m;n=(int)a.size();m=(int)b.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,MOD));
    dp[0][0]=0;
    for (int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            // cout<<i<<' '<<j<<'\n';
            if(j>0)
                dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            if(i>0)
                dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
            if(i>0 && j>0)
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
            if (i>0 && j>0 && a[i-1]==b[j-1])
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
            
        }
    }
    // cerr<<"log\n";
    cout<<dp[n][m]<<'\n';
 
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}