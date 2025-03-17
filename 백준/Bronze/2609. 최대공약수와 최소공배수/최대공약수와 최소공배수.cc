#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	int maxI = INT_MIN;
	for (int i = 1; i <= min(a, b); ++i) {
		if (a % i == 0 && b % i == 0) {
			maxI = i;
		}
	}

	int result = maxI;
	while (true) {
		if (result % a == 0 && result % b == 0) {
			break;
		}

		result += maxI;
	}

	cout << maxI << " " << result;
}
