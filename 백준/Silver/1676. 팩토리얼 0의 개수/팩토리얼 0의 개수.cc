#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}

	cout << cnt;
}
