//https://www.acwing.com/problem/content/3395/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long LL;

int main() {
    LL a0, a1, p, q, k;
    cin >> a0 >> a1 >> p >> q >> k;

    //also"LL A[10001]={};"
    vector<LL> A(10001);

    //necessary
    a0 %= 10000;
    a1 %= 10000;
    p %= 10000;
    q %= 10000;

    if (k == 1) {
        cout << a1 << endl;
        return 0;
    }

    A[0] = a0;
    A[1] = a1;
    for (LL i = 2; i <= 10000; i++) {
        //change algorithm
        A[i] = p * A[i - 1] + q * A[i - 2];
        A[i] %= 10000;
    }
    cout << A[k];
    return 0;
}