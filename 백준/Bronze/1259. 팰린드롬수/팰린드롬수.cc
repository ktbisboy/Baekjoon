#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		string str;
		cin >> str;

		if (str == "0") break;
		int size = str.size();
		bool f = true;
		for (int i = 0; i < size / 2; ++i) {
			if (str[i] != str[size - 1 - i]) {
				f = false;
				break;
			}
		}

		if (f) cout << "yes\n";
		else cout << "no\n";
	}
}
