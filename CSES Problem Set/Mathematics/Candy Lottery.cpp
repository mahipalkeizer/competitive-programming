#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// #define double float
 
 
void test_case(){
    int n,k;cin>>n>>k;
    double ans=0;
    for(int i=k;i>=1;i--){
        double p=1;
        for(int j=0;j<n;j++){
            p*=(double)(i-1)/k;
        }
        // cout<<i<<' '<<(1-p)<<'\n';
        ans+=(1-p);
    }
    printf("%.6f\n",ans);
 
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}