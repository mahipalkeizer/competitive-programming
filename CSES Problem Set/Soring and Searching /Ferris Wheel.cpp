#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,c;cin>>n>>c;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
        if (arr[i]+arr[j]<=c){
            i+=1;
        }
        j-=1;
        ans+=1;
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
 