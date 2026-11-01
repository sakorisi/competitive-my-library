// コンテスト開始前に作成したコード
// https://github.com/sakorisi/competitive-my-library
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cstring>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <random>
#include <bitset>
#include <numeric>
#include <memory>
#include <unordered_set>
#include <ranges>
#include <cassert>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define overload4(a,b,c,d,name,...) name
#define overload3(a,b,c,name,...) name
#define rep1(i,n) for(ll i=0;i<(n);i++)
#define rep2(i,a,b) for(ll i=(a);i<(b);i++)
#define rep3(i,a,b,c) for(ll i=(a);i<(b);i+=(c))
#define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(i,n) for(ll i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for(ll i=(b)-1;i>=(a);i--)
#define rrep3(i,a,b,c) for(ll i=(b)-1;i>=(a);i-=(c))
#define rrep(...) overload4(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define ALL1(i) begin(i),end(i)
#define ALL2(i,a) begin(i),begin(i)+a
#define ALL3(i,a,b) begin(i)+a,begin(i)+b
#define ALL(...) overload3(__VA_ARGS__,ALL3,ALL2,ALL1)(__VA_ARGS__)
#define sz(a) ((ll)a.size())
#define lb(v, x) distance((v).begin(), lower_bound(ALL(v), (x)))
#define lbg(v, x) distance((v).begin(), lower_bound(ALL(v), (x), greater{}))
#define ub(v, x) distance((v).begin(), upper_bound(ALL(v), (x)))
#define ubg(v, x) distance((v).begin(), upper_bound(ALL(v), (x), greater{}))
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(rbegin(v),rend(v))
#define REV(v) reverse(ALL(v))
using ll = long long;
using ull = unsigned long long;
using P = pair<ll,ll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;
using vc = vector<char>;
using vvc = vector<vc>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vvvvi = vector<vvvi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vvvvl = vector<vvvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vp = vector<P>;
using vvp = vector<vp>;
using vvvp = vector<vvp>;
using vs = vector<string>;
using vvs = vector<vs>;
constexpr ll LINF=2e18;
constexpr ll INF=1001001001;
constexpr int dx[8]={-1,0,1,0,-1,1,1,-1};
constexpr int dy[8]={0,1,0,-1,1,1,-1,-1};
template<typename T1, typename T2> inline bool chmax(T1 &a, T2 b) {return ((a < b) ? (a = b, true) : (false));}
template<typename T1, typename T2> inline bool chmin(T1 &a, T2 b) {return ((a > b) ? (a = b, true) : (false));}
template<typename T1, typename T2, typename T3> inline bool inRange(const T1 &x, const T2 &l, const T3 &r) {return l <= x & x < r;}
template<typename T> void prs(const vector<T> &v) {for (const auto &x : v) cout << x << " "; cout << endl;}
template<typename T> void prb(const vector<T> &v) {for (const auto &x : v) cout << x << endl;}
constexpr ll div_floor(ll x, ll y) {assert(y != 0); return (x - ((x%y+y)%y)) / y;}
constexpr ll div_ceil(ll x, ll y) {assert(y != 0); return (x + ((y-x%y)%y)) / y;}
constexpr ll modulo(ll x, ll y) {assert(y != 0); return (x % y + y) % y;}

using mint = modint998244353;
using vm = vector<mint>;
using vvm = vector<vm>;
using vvvm = vector<vvm>;
using vvvvm = vector<vvvm>;



int main() {


    return 0;
}
