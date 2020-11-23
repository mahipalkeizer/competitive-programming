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
void minself(int &x,int ad){
    x=min(x,ad);
}
 
 
void test_case(){
    int a,b;cin>>a>>b;
    int t=max(a,b);a=min(a,b);b=t;
    vector<vector<int>> dp(a+1,vector<int>(b+1,MOD));
    for (int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==j)
                dp[i][j]=0;
            else{
                for (int k=1;k<i;k++)
                    minself(dp[i][j],dp[k][j]+dp[i-k][j]+1);
 
                for (int k=1;k<j;k++)
                    minself(dp[i][j],dp[i][k]+dp[i][j-k]+1);
            }
        }
    }
    // for (auto v:dp)
        // printv(v);
    cerr<<"log\n";
    cout<<dp[a][b]<<'\n';
 
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}