#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// #define double float
 
 
void test_case(){
    int n,k;cin>>n>>k;
    vector<int> arr(k);
    vector<int> dp(n+1,1);
    dp[0]=0;
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int x:arr){
            if(0<=i-x and dp[i-x]==0){
                dp[i]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<(dp[i]?'W':'L');
    }
    cout<<'\n';
 
 
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}