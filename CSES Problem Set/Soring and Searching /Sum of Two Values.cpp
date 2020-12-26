#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n,x;cin>>n>>x;
    vector<array<int,2>> arr(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i]={x,i};
    }
    sort(arr.begin(),arr.end());
    // for(int x:arr)
        // cout<<x<<'\n';
    int i=0,j=n-1;
    while(i<j){
        // cout<<i<<' '<<j<<' '<<arr[i]<<' '<<arr[j]<<'\n';
        if(arr[i][0]+arr[j][0]>x)
            j-=1;
        else if(arr[i][0]+arr[j][0]<x)
            i+=1;
        else{
            cout<<arr[i][1]+1<<' '<<arr[j][1]+1<<'\n';
            return ;
        }   
    }
    cout<<"IMPOSSIBLE";
}
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}