#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vl = vector<ll>;
using vvl = vector<vl>;




// 13 rows
vvl C(5005, vl(5005));

void pascals_triangle(ll n, ll mod) {
    for (ll i = 0; i <= n; ++i) {
        for (ll j = 0; j <= min(i,n); ++j) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;
            }
        }
    }
}



// 36 rows
vl all_fact;
void mod_fact(ll n, ll mod) {
    all_fact.resize(n+1);
    all_fact[0] = 1;
    for(ll i = 1; i <= n; i++) {
        all_fact[i] = all_fact[i-1] * i % mod;
    }
}

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
ll cal_comb(ll n, ll k, ll mod) {
    if(n < 0 || k < 0 || n < k)
        return 0;
    ll a1 = all_fact[n], a2 = all_fact[k], a3 = all_fact[n-k];
    return a1 * mod_inverse(a2 * a3 % mod, mod) % mod;
}
ll mod_comb(ll n, ll k, ll mod) {
    if(all_fact.size() <= n)
        mod_fact(n, mod);
    return cal_comb(n, k, mod);
}









int main() {

    return 0;
}
