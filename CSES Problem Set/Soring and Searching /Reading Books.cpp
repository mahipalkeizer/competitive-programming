#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<ll> arr(n);
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans+=arr[i];
    }
    sort(arr.begin(),arr.end(),greater<ll>());
    cout<<max(ans,2*arr[0] )<<'\n';
 
    
 
    
 
    
 
 
 
}   
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}