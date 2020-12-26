#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    ll maxsum=-1e18;
    ll csum=0;
    for(int x:arr){
        csum=max(csum+x,1LL*x);
        maxsum=max(maxsum,csum);
    }
    cout<<maxsum<<'\n';
}   
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;