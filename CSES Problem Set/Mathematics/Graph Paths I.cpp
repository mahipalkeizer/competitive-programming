#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// f(n)=f[n-1]+f[n-2]..........f[n-6]
const ll MOD=1e9+7;
 
vector<vector<ll>> matmulti(vector<vector<ll>> mata,
                            vector<vector<ll>> matb){
    vector<vector<ll>> ans(100,vector<ll>(100));
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                ans[i][j]+=mata[i][k]*matb[k][j];
                ans[i][j]%=MOD;
            }
        }
    }
    return ans ;
 
}
 
 
void test_case(){
    ll n,m,b;cin>>n>>m>>b;
    vector<vector<ll>> mata(100,vector<ll>(100));
    vector<vector<ll>> ans(100,vector<ll>(100));
    for(int i=0;i<100;i++){
        ans[i][i]=1;
    }
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;a--;b--;
        mata[a][b]+=1;
    }
    while(b){
        if (b&1){
            ans=matmulti(ans,mata);
        }
        mata=matmulti(mata,mata);
        b=b>>1; 
    }
    
    cout<<ans[0][n-1]<<'\n';
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}