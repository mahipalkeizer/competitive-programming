#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;ll x;cin>>n>>x;
    vector<array<ll,2>> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        arr[i][1]=i*1LL;
    }
    sort(arr.begin(),arr.end());
    
    for(int m=0;m<n;m++){
        for(int i=m+1;i<n;i++){
            ll target=x-arr[i][0]-arr[m][0];
            int j=i+1,k=n-1;
            while (j<k){
                if(arr[j][0]+arr[k][0]<target){
                    j+=1;
                }
                else if(arr[j][0]+arr[k][0]>target){
                    k-=1;
                }
                else{
                    cout<<arr[m][1]+1<<' '<<arr[i][1]+1<<' '<<
                    arr[j][1]+1<<' '<<arr[k][1]+1<<'\n';
                    return;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
}   
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}