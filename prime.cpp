#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;





// 12 rows
vector<ll> p;
vector<bool> b(10000005, true);

void prime(int n) {
    b[0] = b[1] = false;
    for(int i = 2; i <= n; i++) {
        if(b[i]) {
            p.push_back(i);
            for(int j = 2*i; j <= n; j+=i) b[j] = false;
        }
    }
}






// 素因数分解
// 12 rows
map<ll,ll> prime_factor(ll n) {
    map<ll,ll> res;
    for(ll i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            res[i]++;
            n /= i;
        }
    }
    if(n != 1)
        res[n] = 1;
    return res;
}
