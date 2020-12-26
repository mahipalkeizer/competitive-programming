#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int x,n;cin>>x>>n;
    multiset<int> s;
    s.insert(0);
    s.insert(x);
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i]=x;
        s.insert(x);
    }
    vector<int> ans(n);
    for(auto it =++s.begin();it!=s.end();it++){
        ans[n-1]=max(ans[n-1],*it-*(--it));
        ++it;
    }
    for(int i=n-1;i>=1;i--){
        auto it =s.lower_bound(arr[i]);
        // cout<<*it<<'\n';
        int a=*(++it);
        --it;
        int b=*(--it);
        ++it;
        // cout<<a<<' '<<b<<'\n';
 
        ans[i-1]=max(ans[i],a-b);
 
        s.erase(*it);
 
        
    }
    for(int x:ans)
        cout<<x<<' ';
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