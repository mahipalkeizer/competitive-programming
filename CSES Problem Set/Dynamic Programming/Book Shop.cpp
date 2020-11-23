#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
 
void test_case(){
    int n,total;cin>>n>>total;
    vector<vector<int>> arr(n,vector<int> (2));
    for(int i=0;i<n;i++)cin>>arr[i][0];
    for(int i=0;i<n;i++)cin>>arr[i][1];
    vector<int> dp(total+1);
    for (int i=0;i<n;i++){
        for(int j=total;j>=arr[i][0];j--){
            dp[j]=max(dp[j],dp[j-arr[i][0] ]+arr[i][1]);
        }
    } 
    cerr<<"log\n";   
    cout<<dp[total]<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}