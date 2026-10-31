#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<ll,ll> P;


// 19 rows
struct edge {int u, v, cost;};
bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}
vector<edge> es;
int V, E;
int kruskal() {
    sort(es.begin(), es.begin() + E, comp);
    dsu d(V);
    int res = 0;
    rep(i,E) {
        edge e = es[i];
        if(!d.same(e.u, e.v)) {
            d.merge(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}
