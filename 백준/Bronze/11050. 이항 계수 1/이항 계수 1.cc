#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	if (k == 0) {
		cout << 1;
		return 0;
	}

	int sum1 = 1;
	for (int i = 1; i <= n; ++i) {
		sum1 *= i;
	}

	int sum2 = 1;
	for (int i = 1; i <= n - k; ++i) {
		sum2 *= i;
	}

	int sum3 = 1;
	for (int i = 1; i <= k; ++i) {
		sum3 *= i;
	}

	int result = sum1 / (sum2 * sum3);
	cout << result;
}
