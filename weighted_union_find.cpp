#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
template<typename T> inline bool chmax(T &a, T b) {return ((a < b) ? (a = b, true) : (false));}
template<typename T> inline bool chmin(T &a, T b) {return ((a > b) ? (a = b, true) : (false));}
typedef long long ll;
typedef pair<ll,ll> P;


// 19 rows
vector<ll> parent(300005, -1), weight(300005);

int root(int i) {
    if(parent[i] == -1) {
        return i;
    }
    int r = root(parent[i]);
    weight[i] = weight[parent[i]] + weight[i];
    return parent[i] = r;
}
bool unite(int i, int j, ll x) {
    int root_i = root(i), root_j = root(j);
    if(root_i == root_j) {
        return weight[j] - weight[i] == x;
    }
    parent[root_i] = root_j;
    weight[root_i] = weight[j] - weight[i] - x;
    return true;
}



int main() {
    return 0;
}
