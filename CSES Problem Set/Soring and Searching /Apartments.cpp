#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> arr(n);
    multiset<int> brr;
    for(int &x:arr)cin>>x;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        brr.insert(x);
    }
    sort(arr.begin(),arr.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        auto it=brr.lower_bound(arr[i]-k);
        if (it!=brr.end() && abs(*it-arr[i])<=k){
            brr.erase(it);
            cnt++;
        }
 
    }
    cout<<cnt<<'\n';
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}
 