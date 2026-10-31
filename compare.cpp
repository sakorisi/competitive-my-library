#include <iostream>
#include <string>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;




// 9 rows
bool my_compare(pair<int, string> a, pair<int, string> b) {
    if(a.first != b.first)
        return a.first < b.first;

    if(a.second != b.second)
        return a.second > b.second;
    else
        return true;
}





// 6 rows
bool arg_compare(P a, P b) {
    if(a.first * b.second - a.second * b.first > 0)
        return true;
    else
        return false;
}

