#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
constexpr ll LINF=0x1fffffffffffffff;




// 11 rows
vector<ll> compression(vector<ll>& a) {
    vector<ll> b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    vector<ll> res(a.size());
    for(ll i = 0; i < a.size(); i++) {
        res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    }
    return res;
}








// 12 rows
map<ll, ll> coordinateCompression(vector<ll>& arr) {
    vector<ll> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    sorted_arr.erase(unique(sorted_arr.begin(), sorted_arr.end()), sorted_arr.end());

    map<ll, ll> compression_map;
    for (int i = 0; i < sorted_arr.size(); ++i) {
        compression_map[sorted_arr[i]] = i;
    }

    return compression_map;
}





int main() {
    std::vector<ll> arr = {10, 20, 10, 30, 20, 40};
    
    // 座標圧縮を実行
    map<ll, ll> compressed_map = coordinateCompression(arr);

    // 結果を表示
    for (const auto& pair : compressed_map) {
        cout << "Value: " << pair.first << " -> Compressed Coordinate: " << pair.second << std::endl;
    }

    return 0;
}










int main() {

    return 0;
}
