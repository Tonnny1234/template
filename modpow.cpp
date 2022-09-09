long long modpow(long long a, long long b, long long md){
	long long x = a, res = 1;
	while(b){
		if(b&1)res *= x, res %= md;
		x *= x; x %= md;
		b >>= 1;
	}	
	return res;
}

