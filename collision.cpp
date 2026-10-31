#include <bits/stdc++.h>
using namespace std;
using ll = long long;





// 線分の交差判定
// 9 rows
bool judge_line(ll x1, ll y1, ll x2, ll y2,
            ll x3, ll y3, ll x4, ll y4) {
    ll j1 = (x1-x2)*(y3-y1)+(y1-y2)*(x1-x3);
    ll j2 = (x1-x2)*(y4-y1)+(y1-y2)*(x1-x4);
    ll j3 = (x3-x4)*(y1-y3)+(y3-y4)*(x3-x1);
    ll j4 = (x3-x4)*(y2-y3)+(y3-y4)*(x3-x2);
    
    return j1*j2 < 0 && j3*j4 < 0;
}




// 長方形の交差判定
// 10 rows
bool judge_rectangle(ll min_x_1, ll min_y_1, ll max_x_1, ll max_y_1,
                ll min_x_2, ll min_y_2, ll max_x_2, ll max_y_2) {
    if(max(min_x_1, min_x_2) < min(max_x_1, max_x_2) &&
        (max(min_y_1, min_y_2) < min(max_y_1, max_y_2))) {
        return true;
    }
    else {
        return false;
    }
}
