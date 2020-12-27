#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// f(n)=f[n-1]+f[n-2]
const ll MOD=1e9+7;
 
vector<vector<ll>> matmulti(vector<vector<ll>> mata,
                            vector<vector<ll>> matb){
    vector<vector<ll>> ans(2,vector<ll>(2));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                ans[i][j]+=mata[i][k]*matb[k][j];
                ans[i][j]%=MOD;
            }
        }
    }
    return ans ;
}
 
 
void test_case(){
    ll b;cin>>b;
    vector<vector<ll>> mata={{0,1},{1,1}};
    vector<vector<ll>> ans={{1,0},{0,1}};
    
    while(b){
        if (b&1){
            ans=matmulti(ans,mata);
        }
        mata=matmulti(mata,mata);
        b=b>>1; 
    }
    cout<<ans[0][1]<<'\n';
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}