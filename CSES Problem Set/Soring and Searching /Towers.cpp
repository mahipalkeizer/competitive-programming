#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    multiset<int> s;
    
    int cnt=0;
    for(int i=0;i<n;i++){
        auto it=s.upper_bound(arr[i]);
        if (it==s.end()){
            s.insert(arr[i]);
            cnt+=1;
        }
        else{
            s.erase(it);
            s.insert(arr[i]);
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
 