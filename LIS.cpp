#include <bits/stdc++.h>
using namespace std;
using ll = long long;






// 10 rows
ll lis(ll n, vector<ll> &a) {
    vector<ll> dp(n, 1e18);
    for(int i = 0; i < n; i++) {
        // <:  lower_bound
        // <=: upper_bound
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    ll ans = lower_bound(dp.begin(), dp.end(), 1e18) - dp.begin();
    return ans;
}

