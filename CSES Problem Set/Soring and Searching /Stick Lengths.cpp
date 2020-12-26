#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<ll> arr(n);
    ll sum=0; 
    for(int i=0;i<n;i++){
        cin>>arr[i];sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    ll psum=0;
    ll ans =1e18;
    for (ll i=0;i<n;i++){
        ans=min(ans,i*arr[i]-psum+sum-psum-(n-i)*arr[i]);
        psum+=arr[i];
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