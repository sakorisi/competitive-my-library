#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll x, ll y, ll mod) {
    if(y == 1) 
        return x;
    ll ans;
    if(y % 2 == 1) {
        ll r = power(x,(y-1)/2,mod);
        ans = r * r % mod;
        ans = ans * x % mod;
    }
    else {
        ll r = power(x,y/2,mod);
        ans = r * r % mod;
    }
    return ans;
}
