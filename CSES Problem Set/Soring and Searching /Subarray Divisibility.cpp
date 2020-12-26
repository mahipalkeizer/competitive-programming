#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,ll> mp;
    ll ans=0; 
    ll cursum=0;
    mp[cursum]+=1;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        ans+=mp[(cursum%n+n)%n];
        mp[(cursum%n+n)%n]+=1;;
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