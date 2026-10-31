#include <iostream>
#include <vector>

using namespace std;
using vi = vector<int>;




// 25 rows
vi manacher(const string &s) {
    string t = "#";
    for (char c : s) {
        t.push_back(c);
        t.push_back('#');
    }
    int m = t.size();
    vi p(m);
    int c = 0, r = 0;

    for (int i = 0; i < m; i++) {
        int mirr = 2 * c - i;
        if (i < r) {
            p[i] = min(r - i, p[mirr]);
        }
        while (i + p[i] + 1 < m && i - p[i] - 1 >= 0 && t[i + p[i] + 1] == t[i - p[i] - 1]) {
            p[i]++;
        }
        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }
    }
    return p;
}



// 使用例
void solve() {
    string s;
    cin >> s;
    vector<int> p = manacher(s);
    
    // 最長回文部分文字列を見つける
    int maxLen = 0, centerIndex = 0;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] > maxLen) {
            maxLen = p[i];
            centerIndex = i;
        }
    }
    
    // 元の文字列における最長回文部分文字列を抽出
    int start = (centerIndex - maxLen) / 2;
    string palindrome = s.substr(start, maxLen);
    
    cout << "最長回文部分文字列: " << palindrome << endl;
    cout << "長さ: " << maxLen << endl;
}
