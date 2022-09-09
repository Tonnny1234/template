long long binpow(long long a, long long b){
	long long x = a, res = 1;
	while(b){
		if(b&1)res *= x;
		x *= x;
		b >>= 1;
	}	
	return res;
}

