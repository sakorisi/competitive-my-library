#include <bits/stdc++.h>
using namespace std;
using ll = long long;





// 行列の掛け算
// 11 rows
vector<vector<ll>> multiple(vector<vector<ll>> a, vector<vector<ll>> b) {
    vector<vector<ll>> c(a.size(),vector<ll>(b[0].size()));
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b[0].size(); j++) {
            for(int k = 0; k < b.size(); k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    return c;
}

