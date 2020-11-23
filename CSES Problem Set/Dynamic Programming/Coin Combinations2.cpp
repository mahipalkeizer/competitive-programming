#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int N = 1e6+10;
int lp[N+1];
vector<int> pr;
 
void test_case(){
    int n,x;cin>>n>>x;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    vector<ll> res(x+1);
    res[0]=1LL;
    for(int val:arr){
        for(int i=1;i<=x;i++){
            if (i-val>=0){
                res[i]+=res[i-val];
                res[i]%=1000000007LL;
            }
        }
        // res[i]%=1000000007LL;
    }
    // if (res[x]==1e9)
        // res[x]=-1;
    // for(int x:res)
        // cout<<x<<'\n';
    cout<<res[x]<<'\n';
 
}
    
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}