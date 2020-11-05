#include<bits/stdc++.h>
using namespace std;

#define ll long long
//iterative 
ll binary_exp(int a,int b,int MOD){
	ll ans=1LL;
	ll t=a;
	while(b){
		if (b&1){
			ans*=t;
			ans%=MOD;
		}
		t*=t;
		t%=MOD;
		b=b>>1;	
	}
	return ans;
}

//recursive
ll binary_exp_recursive(int a,int b,int MOD){
    if (b==0 ){
        return 1LL;
    }
    ll x=binary_exp(a,b/2,MOD);
    ll ans= x*x;
    ans%=MOD;
    if (b&1)
        ans*=a;
    return ans%MOD;
}



int main(){
	cout<<binary_exp(2,102234,1e9+7)<<'\n';
    cout<<binary_exp_recursive(2,102234,1e9+7)<<'\n';
}







