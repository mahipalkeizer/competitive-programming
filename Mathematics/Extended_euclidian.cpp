#include<bits/stdc++.h>
using namespace std;

//(smaller number ,bigger,co-efficient of smaller ,co-efficient of bigger)
void ext_gcd(int a,int b,int &x,int &y){
	if (a==0){
		x=0;
		y=1;
		return ;
	}
	int x1,y1;
	ext_gcd(b%a,a,x1,y1);
	x=y1-(b/a)*x1;
	y=x1;
}

int main(){
	int x,y;
	ext_gcd(6,16,x,y);
	cout<<x<<' '<<y<<'\n';
}
