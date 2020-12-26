#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void test_case(){
    int n,a,b;cin>>n>>a>>b;
    vector<int> arr(n);
    vector<ll> prefix_sum(n+1);
    for (int i=0;i<n;i++){
        cin>>arr[i];
        prefix_sum[i+1]=prefix_sum[i]+arr[i];
    }
    multiset<ll> st;
    ll ans =-1e18;
    for(int i=0;i<n;i++){
        if (i-a+1>=0){
            st.insert(prefix_sum[i-a+1]);
        }
        if (i-b>=0){
            st.erase(st.find(prefix_sum[i-b]));
        }
        // for (int x:st)
            // cout<<x<<' ';
        // cout<<"    "<<prefix_sum[i+1];
        // cout<<'\n';
        auto mn=st.begin();
        if (mn!=st.end()){
            ans=max(ans,prefix_sum[i+1]-*mn); 
        }
    }
    cout<<ans<<'\n'; 
 
}
int main(){
    int t;t=1;//cin>>t;
    while(t--)
        test_case();
    return 0;
}
 
 
