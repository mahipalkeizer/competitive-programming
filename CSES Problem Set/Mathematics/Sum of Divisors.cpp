#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int MOD=1e9+7;
 
 
ll apsm(ll l,ll r){
    r%=MOD;
    l%=MOD;
    ll ans=(r)*(r+1)/2-l*(l-1)/2;
    return (ans%MOD+MOD)%MOD;
 
}
 
 
void test_case(){
    ll n ;cin>>n;
    ll sm=0;
    ll fc=n;
    ll pip=1;
    while (fc!=1){
        ll nxt=n/fc;
        sm+=(fc%MOD)*apsm(pip,nxt);
        sm%=MOD;
        // cout<<fc<<' '<<pip<<' '<<nxt<<' '<<apsm(pip%MOD,nxt%MOD)<<'\n';
        fc=n/(nxt+1);
        pip=nxt+1;
    }
    sm+=(fc%MOD)*apsm(pip,n);
    sm%=MOD;
    cout<<sm<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}