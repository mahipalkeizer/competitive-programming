#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
 
 
void test_case(){
    int n,a,b;cin>>n>>a>>b;
    vector<double> dp(607);
    dp[0]=1;
    for(int i=0;i<n;i++){
        vector<double> ndp(607);
        for(int j=0;j<=600;j++){
            for(int k=1;k<7;k++){
                ndp[j+k]+=dp[j]/6;
            }
        }
        // for(int m=0;m<15;m++)
        //     cout<<ndp[m]<<' ';
        // cout<<'\n';
        dp=ndp;
    }
    double ans=0;
    for(int i=a;i<=b;i++){
        ans+=dp[i];
    }
    printf("%.6f\n",ans);
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}