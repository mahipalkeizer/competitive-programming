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
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    vector<int> dp(m+1);
    if (arr[0]!=0)
        dp[arr[0]]=1;
    else
        dp=vector<int>(m+1,1);
    dp[0]=0;
    for (int i=1;i<n;i++){
        vector<int>new_dp(m+1);
        for (int j=1;j<=m;j++){
            addself(new_dp[j],dp[j]*(arr[i]==0 || arr[i]==j));
            if (j-1>=1)
                addself( new_dp[j],dp[j-1]*(arr[i]==0 || arr[i]==j));
            if (j+1<=m)
                addself( new_dp[j],dp[j+1]*(arr[i]==0 || arr[i]==j));
           
        }   
        dp=new_dp;
 
    }
    int ans=0;
    for (int x:dp)addself(ans,x);
    cerr<<"log\n";
    cout<<ans<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}