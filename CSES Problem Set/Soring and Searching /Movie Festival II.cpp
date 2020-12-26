#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void test_case(){
    int n,k;cin>>n>>k;
    vector<array<int,2>>arr;
    for (int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({b,a});
    }
    sort(arr.begin(),arr.end());
    // for (auto a :arr){
        // cout<<a[0]<<' '<<a[1]<<'\n';
    // }
    // cout<<"\n\n\n\n";
    int cnt=0;
    multiset<int> st;
    for (int i=0;i<n;i++){
 
        auto it =st.lower_bound(arr[i][1]+1);
        // cout<<i<<' '<<*it<<'M';
        if (it!=st.begin()){
            it--;
            st.erase(it);
        }
        if (st.size()<k){
            cnt+=1;
            // cerr<<arr[i][0]<<' '<<arr[i][1]<<'\n';
            st.insert(arr[i][0]);
            // k-=1;
        }
       
    }
    cout<<cnt<<'\n';
 
}
int main(){
    int t;t=1;//cin>>t;
    while(t--)
        test_case();
    return 0;
}
 
 