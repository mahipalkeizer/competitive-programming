#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,m;cin>>n>>m;
    multiset<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        auto it=arr.lower_bound(x+1);
        if(it!=arr.begin()){
            it--;
            cout<<*it<<'\n';
            arr.erase(it);
        }
        else{
            cout<<-1<<'\n';
        }
    }
    
    
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}