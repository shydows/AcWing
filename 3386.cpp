//https://www.acwing.com/problem/content/3389/
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int c, max, min;
        scanf("%d", &c);
        max = min = c;
        for (int i = 1; i < n; i++) {
            scanf("%d", &c);
            if (c > max) max = c;
            if (c < min) min = c;
        }
        cout << max << ' ' << min << endl;
    }
}