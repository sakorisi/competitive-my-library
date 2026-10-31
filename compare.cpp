#include <iostream>
#include <string>
using namespace std;






// 9 rows
bool my_compare(pair<int, string> a, pair<int, string> b) {
    if(a.first != b.first)
        return a.first < b.first;

    if(a.second != b.second)
        return a.second > b.second;
    else
        return true;
}

