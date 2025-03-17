#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, v;
	cin >> a >> b >> v;

	int speed = a - b;
	int day = v / speed;

	int sum = speed * day;
	if (sum + b >= v) {
		int t = b / speed;
		cout << day - t;
	}
	else {
		cout << day + 1;
	}
}
