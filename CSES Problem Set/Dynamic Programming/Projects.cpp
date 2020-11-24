#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void printv( const vector<int> v){for(int x:v) cout<<x<<' '; cout<<'\n';}

void maxself(ll &x,ll ad){
    x=max(x,ad);
}

struct S{
    int a,b,p;
    S(int x,int y,int z){a=x;b=y;p=z;}

    bool operator<(S const& other) const{
        return a < other.a;
    }
};
 
 
void test_case(){
    int n;cin>>n;
    vector<struct S> arr(n,{0,0,0});
    for(int i=0;i<n;i++){
        cin>>arr[i].a >>arr[i].b>>arr[i].p;
    }
    sort(arr.begin(),arr.end());
    
    map<int,ll> s;
    s[0]=0;
    ll ans=0;
    ll pa=0;
    auto it=s.begin();
    for(int i=0;i<n;i++){
        while(s.begin()!=s.end() &&(*s.begin()).first< arr[i].a){
            pa=max(pa,(*s.begin()).second);
            s.erase(s.begin());
        }
        maxself(s[arr[i].b] ,pa+arr[i].p );
        maxself(ans,pa+arr[i].p);
        // cout<<arr[i].a<<' '<<pa<<' '<<ans<<'\n';
    
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