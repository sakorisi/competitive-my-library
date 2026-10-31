#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<ll,ll> P;


// 34 rows
const int MAX_N = 500005;
int par[MAX_N];
int dep[MAX_N];

void init(int n) {
    for(int i = 0; i < n; i++) {
        par[i] = i;
        dep[i] = 0;
    }
}
int find(int x) {
    if(par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}
void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y)
        return;
    
    if(dep[x] < dep[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if(dep[x] == dep[y])
            dep[x]++;
    }
}
bool same(int x, int y) {
    return find(x) == find(y);
}

