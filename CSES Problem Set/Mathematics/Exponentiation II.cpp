#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int MOD=1e9+7;
 
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
void test_case(){
    int a,b,c;cin>>a>>b>>c;
    cout<<binary_exp(a,binary_exp(b,c,MOD-1),MOD)<<'\n';    
}
 
 
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        test_case();
    }
}