#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int N = 1e6+10;
int lp[N+1];
vector<int> pr;
 
void test_case(){
    int n;cin>>n;
    vector<int> res(n+1,1e9);
    res[0]=0;
    for(int i=1;i<=n;i++){
        int t=i;
        while(t){
            int d=t%10;
            res[i]=min(res[i],res[i-d]+1);
            t/=10;
        }
    }
  
    cout<<res[n]<<'\n';
 
}
    
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}
 