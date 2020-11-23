#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int N = 1e6+10;
int lp[N+1];
vector<int> pr;
 
void test_case(){
    int n;cin>>n;
    vector<int> res(n+1);
    res[0]=1;
    for (int i=1;i<=n;i++){
        for (int j=i-1;j>=max(0,i-6);j--){
            res[i]+=res[j];
            if (res[i]>=1e9+7)
                res[i]-=1e9+7;
        }
    }
    cout<<res[n]<<'\n';
 
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