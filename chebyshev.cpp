#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;




// マンハッタン距離の計算、チェビシェフ距離
// 3 rows
P chebyshev(ll x, ll y) {
    return {x-y, x+y};
}
