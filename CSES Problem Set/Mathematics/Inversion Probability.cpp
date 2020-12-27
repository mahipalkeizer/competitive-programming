#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// #define double float
 
 
void test_case(){
    int n;cin>>n;
    double ans=0;
    vector<int> arr(n);
    for(int &x:arr)cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int cnt=0;
            for(int a=1;a<=arr[i];a++){
                cnt+=max(0,arr[j]-a);
            }
            // cout<<i<<' '<<j<<' '<<cnt<<' '<<arr[i]*arr[j]<<'\n';
            ans+=(cnt)/(double)(arr[i]*arr[j]);
        }
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