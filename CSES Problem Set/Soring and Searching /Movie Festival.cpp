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
        arr.push_back({b,a});
    }
    sort(arr.begin(),arr.end());
    int pe=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i][1]>=pe){
            // cout<<arr[i][1]<<' '<<arr[i][0]<<'\n';
            cnt+=1;
            pe=arr[i][0];
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
 