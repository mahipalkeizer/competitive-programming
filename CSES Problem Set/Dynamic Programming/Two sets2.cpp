#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void printv( const vector<int> v){
    for(int x:v)
        cout<<x<<' ';
    cout<<'\n';
}
void addself(int &x,int ad){
    x+=ad;
    if (x>MOD) x-=MOD;
}
 
 
 
 
void test_case(){
    int n;cin>>n;
    if ((n*(n+1))%4!=0) {
        cout<<0<<'\n';return;
    }
    int target=n*(n+1)/4;
    vector<int> ways(target+1);
    ways[0]=1;
    for(int i=1;i<=n;i++){
        // printv(ways);
        for(int j=target;j-i>=0;j--){
            addself(ways[j],ways[j-i]);
        }
    }
    cerr<<"log\n";
    cout<<500000004LL*ways[target]%(MOD)<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}