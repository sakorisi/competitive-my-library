#include <iostream>
#include <cassert>
using ll = long long;





// 13 rows
ll longPow(ll base, ll exp) {
    assert(exp >= 0 && "指数は0以上である必要があります");

    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}


int main() {
    // テストケース
    std::cout << "2^10 = " << longPow(2, 10) << std::endl;  // 1024
    std::cout << "5^3 = " << longPow(5, 3) << std::endl;    // 125
    std::cout << "7^0 = " << longPow(7, 0) << std::endl;    // 1
    std::cout << "10^5 = " << longPow(10, 5) << std::endl;  // 100000

    return 0;
}