#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int N = 1e6+10;
int lp[N+1];
vector<int> pr;
 
void test_case(){
    int n,x;cin>>n>>x;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    vector<int> res(x+1,1e9);
    res[0]=0;
    for(int i=1;i<=x;i++){
        for(int x:arr){
            if (i-x>=0){
                res[i]=min(res[i],res[i-x]+1);
            }
        }
    }
    if (res[x]==1e9)
        res[x]=-1;
    cout<<res[x]<<'\n';
 
}
    
 
int main(){
    int t;
    t=1;
    // cin>>t;
    // t=1;
    while(t--)
        test_case();
    return 0;
}
 