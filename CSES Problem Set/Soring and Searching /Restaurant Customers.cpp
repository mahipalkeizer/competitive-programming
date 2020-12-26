#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<array<int,2>> arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,0});//entering
        arr.push_back({b,1});//leaving 
    }
    sort(arr.begin(),arr.end());
    int cnt=0;
    int ans=0;
 
    for(array<int,2> a:arr){
 
        if (a[1]==0){
            cnt++;
        }
        else{
            cnt--;
        }
        ans=max(ans,cnt);;
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