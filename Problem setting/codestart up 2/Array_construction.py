MOD=10**9+7

##binary exponantiation to compute a**b(modulo MOD)
def binary_exp(a,b,MOD):
	ans=1
	while b:
		if b&1:
			ans*=a
			ans%=MOD
		a*=a
		a%=MOD
		b//=2
	return ans 

fac=[1]*(10**5+1)
##computing factorial MOD
for i in range(2,10**5+1):
	fac[i]=fac[i-1]*i
	fac[i]%=MOD	
##computing factorial inverse MOD
facinv=[binary_exp(i,MOD-2,MOD) for i in fac]



for _ in range(int(input())):
	n,k=map(int,input().split())
	res=fac[n]*facinv[n-k]*facinv[k]
	res%=MOD
	res*=binary_exp(2,n,MOD)
	res%=MOD
	print(res)








