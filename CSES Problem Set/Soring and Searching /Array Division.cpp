#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    ll l=0LL ,r=1e18;
    ll ans;
    while (l<=r){
        ll mid=l+(r-l)/2;
        ll psum=0,cnt=1;
        for(int x:arr){
            if(x+psum<=mid){
                psum+=x;
            }
            else{
                if(x<=mid){
                    cnt+=1;
                    psum=x;
                }
                else{
                    cnt=n+1;
                    break;
                }
                
            }
        }
        // cout<<mid<<' '<<' '<<cnt<<'\n';
        if(cnt<=k){
            ans=mid;
            r=mid-1;
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
 