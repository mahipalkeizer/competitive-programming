#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<array<int,3>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        arr[i][2]=i;
    }
 
    sort(arr.begin(),arr.end());
    // for (auto a:arr)
        // cout<<a[0]<<' '<<a[1]<<'\n';
    map<array<int,2>,int> mpr;
    vector<int> ans(n);
    int cnt=1;
    for(int i=0;i<n;i++){
        auto it =mpr.lower_bound({arr[i][0],-1});
        if(it!=mpr.begin() ){
            // cout<<'n';
            --it;
            // cout<<(*it).second<<'\n';
            ans[arr[i][2]]=(*it).second;
            mpr.erase(it);
            mpr[{arr[i][1],i}]=ans[arr[i][2]];
        }
        else{
            // cout<<"mah";
            ans[arr[i][2]]=cnt;
            cnt+=1;
          
            mpr[{arr[i][1],i}]=ans[arr[i][2]];
        }
    }
    cout<<cnt-1<<'\n';
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