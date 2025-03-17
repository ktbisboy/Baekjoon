#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	int gcd = -1;
	int r = -1;

	r = abs(a - b);
	for (int i = 1; i <= min(a, b); ++i) {
		if (b % i == 0 && r % i == 0)
			gcd = i;
	}

	int lcm = (a * b) / gcd;

	cout << gcd << " " << lcm;
}
