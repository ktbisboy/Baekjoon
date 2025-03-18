#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int x = 666;
	int cnt = 0;
	while (true) {
		string str = to_string(x);

		int c = 0;
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] == '6')
				++c;
			else
				c = 0;

			if (c == 3) {
				++cnt;
				break;
			}
		}

		if (cnt == n) {
			cout << x;
			break;
		}

		++x;
	}

}