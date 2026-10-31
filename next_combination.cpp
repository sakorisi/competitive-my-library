#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
template<typename T> inline bool chmax(T &a, T b) {return ((a < b) ? (a = b, true) : (false));}
template<typename T> inline bool chmin(T &a, T b) {return ((a > b) ? (a = b, true) : (false));}
typedef long long ll;
typedef pair<ll,ll> P;


// 35 rows
template <class BidirectionalIterator, class Compare>
bool next_combination(BidirectionalIterator first, BidirectionalIterator last, Compare comp, size_t r) {
    BidirectionalIterator subset = first + r;
    BidirectionalIterator src = subset;
    BidirectionalIterator dst = subset;
    
    if (first == last || first == subset || last == subset) {
        return false;
    }
    
    while (first != src) {
        src--;
    
        if (comp(*src, *(last - 1))) {
        while (*src >= *dst) {
            dst++;
        }
    
        iter_swap(src, dst);
        rotate(src + 1, dst + 1, last);
        rotate(subset, subset + (last - dst) - 1, last);
    
        return true;
        }
    }
    
    rotate(first, subset, last);
    
    return false;
}
template <class BidirectionalIterator>
bool next_combination(BidirectionalIterator first, BidirectionalIterator last, size_t r) {
    using value_type = typename std::iterator_traits<BidirectionalIterator>::value_type;
    return next_combination(first, last, std::less<value_type>(), r);
}



int main() {
    vector<int> v = {0,1,2,3,4};
    do { 
        rep(i,5) cout << v[i] << " ";
        cout << endl;
    } while(next_combination(v.begin(), v.end(), 3));


    return 0;
}
