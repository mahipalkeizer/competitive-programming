#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<array<int,2>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    sort(arr.begin(),arr.end());
    ll ans =0;
    ll ft=0;
    for(array<int,2> a:arr){
        ft+=a[0];
        // cout<<a[0]<<' '<<ft<<'\n';
        ans+=1LL*a[1]-ft;
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