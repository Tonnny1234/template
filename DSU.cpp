struct DSU{
	vector<int> par, sz;
	int N;
	DSU(int n){
		N = n;	par.resize(N+1);
		sz.resize(N+1);
		iota(par.begin(), par.end(), 0); 
		fill(sz.begin(), sz.end(), 1);
	}
	int fnd(int src){return par[src] == src ? par[src]: fnd(par[src]);}
	bool merge(int a, int b){
		a = fnd(a); b= fnd(b);
		if(a==b)return 0;
		if(sz[a] < sz[b])swap(a, b);
		sz[a] += sz[b];
		par[b] = a;
		return 1;
	}
	int get_sz(int u){
		return sz[fnd(u)];
	}
};

