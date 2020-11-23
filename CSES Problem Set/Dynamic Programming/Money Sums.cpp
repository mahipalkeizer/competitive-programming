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
void minself(int &x,int ad){
    x=min(x,ad);
}
 
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    vector<int> pos(1e6+1);
    pos[0]=1;
    for(int x:arr){
        for(int i=1e6;i>=x;i--){
            pos[i] |=pos[i-x];
        }
    }
    // printv(pos);
    vector<int> ans;
    for(int i=1;i<1e6+1;i++){
        if(pos[i])
            ans.push_back(i);
    }
    cout<<(int)ans.size()<<'\n';
    for(int x:ans)cout<<x<<' ';
    cout<<'\n';
 
    
 
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}