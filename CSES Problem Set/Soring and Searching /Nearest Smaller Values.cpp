#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long 
 
const int MOD = 1e9+7;
 
void test_case(){
    int n;cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> stack;
    
    for(int i=0;i<n;i++){
        while((int)stack.size() && arr[stack.back()]>=arr[i])
            stack.pop_back();
        if((int)stack.size()){
            cout<<stack.back()+1<<' ';
        }
        else{
            cout<<0<<' ';
        }
        stack.push_back(i);
    }
    cout<<'\n';
}   
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--)
        test_case();
    return 0;
}