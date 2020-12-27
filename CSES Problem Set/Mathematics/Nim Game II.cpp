#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// #define double float
 
 
void test_case(){
    int n;cin>>n;
    int x=0;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;x^=(t%4);
    }
    cout<<(x?"first":"second")<<'\n';
 
 
   
 
 
}
 
 
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        test_case();
    }
}