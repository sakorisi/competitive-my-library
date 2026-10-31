#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using vvp = vector<vector<P>>;
using vl = vector<ll>;
constexpr ll LINF=0x1fffffffffffffff;


int main() {
    ll n = 500005;
    vvp to(n);
    

    // 18 rows
    vl dist(n,LINF);
    auto dijkstra = [&](ll s) {
        priority_queue<P,vector<P>,greater<P>> que;
        dist[s] = 0;
        que.emplace(0, s);
        while(!que.empty()) {
            P p = que.top(); que.pop();
            ll v = p.second;
            if(dist[v] < p.first) continue;
            for(ll i = 0; i < to[v].size(); i++) {
                P e = to[v][i];
                if(dist[e.first] > dist[v] + e.second) {
                    dist[e.first] = dist[v] + e.second;
                    que.emplace(dist[e.first], e.first);
                }
            }
        }
    };
}
