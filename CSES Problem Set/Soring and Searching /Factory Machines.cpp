#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,t;cin>>n>>t;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll l=0,r=1e18;
    ll ans=-1;
    while (l<=r){
        ll mid =l+(r-l)/2;
        ll k=0;
 
        for(ll x:arr){
            k+=mid/x;
            // cout<<mid<<' '<<mid/x<<'\n';
        }
        // cout<<mid<<' '<<k<<'\n';
 
        if(k>=t || k<0){
            r=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
 
}   
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}