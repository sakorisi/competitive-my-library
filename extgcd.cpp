#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






// 17 rows
ll extgcd(ll a, ll b, ll& x, ll& y) {
    ll d = a;
    if(b != 0) {
        d = extgcd(b, a%b, y, x);
        y -= (a/b) * x;
    }
    else {
        x = 1; y = 0;
    }
    return d;
}

ll mod_inverse(ll a, ll mod) {
    ll x, y;
    extgcd(a, mod, x, y);
    return (mod + x % mod) % mod;
}

