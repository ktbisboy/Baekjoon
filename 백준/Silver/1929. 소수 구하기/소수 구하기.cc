#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        if (i == 1) continue;

        bool f = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                f = false;
                break;
            }
        }

        if (f) cout << i << endl;
    }
}