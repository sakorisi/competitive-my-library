#include <bits/stdc++.h>
using namespace std;






// 文字列を左に90度回転
// 8 rows
vector<string> rect_rotate(vector<string> v) {
    int h = v.size(), w = v[0].size();
    vector<string> rv(w,string(h,'.'));
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            rv[w-1-j][i] = v[i][j];
    return rv;
}



int main() {
    vector<string> s(3);
    s[0] = "112";
    s[1] = "334";
    s[2] = "445";

    s = rect_rotate(s);

    for(int i = 0; i < 3; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
