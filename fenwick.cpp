template <typename T>
struct Fenwick{
    int N;
    vector<T> bit;
    Fenwick(int n){
        N = n; bit.resize(N + 1);
    }
    void upd(int v, T val){
        for(; v <= N; v += (v & -v)){
            bit[v] += val; 
        }
    }
    T qry(int v){
        T res = 0;
        for(; v; v -= (v & -v)){
            res += bit[v];
        }
        return res; 
    }
};
