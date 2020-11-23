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
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    vector<int>lcs;
    for (int i=0;i<n;i++){
        auto it=lower_bound(lcs.begin(),lcs.end(),arr[i]);
        if(it==lcs.end())
            lcs.push_back(arr[i]);
        else
            *it=arr[i];
    }
    cout<<(int)lcs.size()<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}