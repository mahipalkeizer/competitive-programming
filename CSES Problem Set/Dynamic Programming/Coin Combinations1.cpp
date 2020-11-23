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
    for(int i=1;i<=x;i++){
        for(int x:arr){
            if (i-x>=0){
                res[i]+=res[i-x];
                // res[i]+=1;
            }
        }
        res[i]%=1000000007LL;
    }
    // if (res[x]==1e9)
        // res[x]=-1;
    cout<<res[x]<<'\n';
 
}
    
 
int main(){
    int t;
    t=1;
    // cin>>t;
    // t=1;
    while(t--)
        test_case();
    return 0;
}