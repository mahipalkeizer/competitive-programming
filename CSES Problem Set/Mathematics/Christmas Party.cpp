#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int MOD=1e9+7;
 
void test_case(){
    int n;cin>>n;
    ll c1=0;
    ll c2=1;
    if(n==1)
        c2=c1;
    ll t;
    for(int i=3;i<=n;i++){
        t=c2;
        c2=(i-1)*(c2+c1);
        c1=t;
        c2%=MOD;
    }
    cout<<c2<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}