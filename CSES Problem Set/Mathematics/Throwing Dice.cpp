#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// f(n)=f[n-1]+f[n-2]..........f[n-6]
const ll MOD=1e9+7;
 
vector<vector<ll>> matmulti(vector<vector<ll>> mata,
                            vector<vector<ll>> matb){
    vector<vector<ll>> ans(6,vector<ll>(6));
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            for(int k=0;k<6;k++){
                ans[i][j]+=mata[i][k]*matb[k][j];
                ans[i][j]%=MOD;
            }
        }
    }
    return ans ;
 
}
 
 
void test_case(){
    ll b;cin>>b;
    vector<vector<ll>> mata={
                        {0,1,0,0,0,0},
                        {0,0,1,0,0,0},
                        {0,0,0,1,0,0},
                        {0,0,0,0,1,0},
                        {0,0,0,0,0,1},
                        {1,1,1,1,1,1}};
 
    vector<vector<ll>> ans={
                        {1,0,0,0,0,0},
                        {0,1,0,0,0,0},
                        {0,0,1,0,0,0},
                        {0,0,0,1,0,0},
                        {0,0,0,0,1,0},
                        {0,0,0,0,0,1}};
    while(b){
        if (b&1){
            ans=matmulti(ans,mata);
        }
        mata=matmulti(mata,mata);
        b=b>>1; 
    }
    ll a=ans[0][0]+ans[0][1]+2*ans[0][2]+
        4*ans[0][3]+8*ans[0][4]+16*ans[0][5];
    a%=MOD;
    cout<<a<<'\n';
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}