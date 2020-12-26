#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    sort(arr.begin(),arr.end());
    int ans=1;
    for(int i=1;i<n;i++){
        if (arr[i]!=arr[i-1]){
            ans+=1;
        }
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