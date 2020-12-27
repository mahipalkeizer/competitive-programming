#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
int MOD=1e9+7;
 
const int SZ=1e6+1;
vector<vector<int>> vf(SZ);
 
 
 
void test_case(){
    int n ;cin>>n;
    vector<int> pos(SZ);
    int mx=1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mx=max(x,mx);
        pos[x]+=1;
    }
    for(int gcd=mx;gcd>0;gcd--){
        int cnt=0;
        for(int j=gcd;j<=mx;j+=gcd){
            cnt+=pos[j];
 
        }
        // cout<<gcd<<' '<<cnt<<'\n';
        if(cnt>1){
            cout<<gcd<<'\n';
            return ;
        }
    }
 
 
 
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}