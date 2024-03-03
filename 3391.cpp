#include <bits/stdc++.h>

using namespace std;

//月份不是单纯的基数大偶数小
const int Mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

bool isRun(int Y) {
    if (Y % 4 == 0 && Y % 100 != 0 || Y % 400 == 0) return true;
    return false;
}

int main() {
    int Y, M, D;
    while (cin >> Y >> M >> D) {
        int res = D;
        for (int i = M - 1; i > 0; i--) {
            res += Mon[i - 1];
        }
        if (isRun(Y) && M > 2) res++;
        cout << res << endl;
    }
    return 0;
}