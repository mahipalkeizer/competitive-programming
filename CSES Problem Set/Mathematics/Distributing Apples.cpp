#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int MOD=1e9+7;
 
int SZ=2e6+1;
vector<ll> fac(SZ);
vector<ll> invfac(SZ);
 
//iterative 
ll binary_exp(int a,int b,int MOD){
    ll ans=1LL;
    ll t=a;
    while(b){
        if (b&1){
            ans*=t;
            ans%=MOD;
        }
        t*=t;
        t%=MOD;
        b=b>>1; 
    }
    return ans;
}
 
 
void pre_process(){
    fac[0]=fac[1]=1;
    for(int i=2;i<SZ;i++){
        fac[i]=fac[i-1]*i;
        fac[i]%=MOD;
    }
    invfac[SZ-1]=binary_exp(fac[SZ-1],MOD-2,MOD);
    for(int i=SZ-2;i>=0;i--){
        invfac[i]=(i+1)*invfac[i+1];
        invfac[i]%=MOD;
    }
 
}
 
 
void test_case(){
    int n,m;cin>>n>>m;
    cout<<((fac[n+m-1]*invfac[m])%MOD*invfac[n-1])%MOD<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    pre_process();
    while(t--){
        test_case();
    }
}