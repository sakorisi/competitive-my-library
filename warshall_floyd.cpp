#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vl>;



// 8 rows
void warshall_floyd(int V, vvl &d) {
    for(int i = 0; i < V; i++)
        d[i][i] = 0;
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}





int main() {

    return 0;
}
