//�������Ż�
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int n;

int main() {
    cin >> n;
    int a, res;
    while (cin >> a) {
        res = 0;
        //��a/i��sqrt(a)Ч��һ����˼����Ϊʲô
        for (int i = 1; i <= a / i; i++) {
            if (a % i == 0) {
                res += 2;
                if (i == a / i) {
                    res--;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}