#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    set<int> s;
    int start=0,ans=1;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it!=s.end() && *it==arr[i]){
            auto it2=s.lower_bound(arr[start]);
            while(it2!=it){
                s.erase(it2);
                start+=1;
                it2=s.lower_bound(arr[start]);
            }
            s.erase(it2);
            start+=1;
        }
        // cout<<i<<' '<<start<<'\n';
        s.insert(arr[i]);
        ans=max(ans,i-start+1);
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
 