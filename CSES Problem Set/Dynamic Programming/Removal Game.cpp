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
    int n;cin>>n;
    vector<ll> arr(n);
    for(ll &x:arr)cin>>x;
    vector<vector<ll>> dp(n,vector<ll>(n));
    vector<ll> presum(n+1);
    for(int i=0;i<n;i++){
        presum[i+1]=presum[i]+arr[i];
        dp[i][i]=arr[i];
    }
 
    // i    i+gap-1
    for(int gap=1;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            dp[i][i+gap]=max(arr[i]+ presum[i+gap+1]-presum[i+1]-dp[i+1][i+gap],
                            arr[i+gap]+ presum[i+gap]-presum[i]-dp[i][i+gap-1]);           
        }
    }
    cerr<<"log\n";
    cout<<dp[0][n-1]<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}