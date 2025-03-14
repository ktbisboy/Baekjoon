#include <iostream>
using namespace std;

int main() {
	int l;
	cin >> l;
	string str;
	cin >> str;

	const int R = 31;
	const int M = 1234567891;

	int sum = 0;
	for (int i = 0; i < l; ++i) {
		int a = (str[i] - 'a' + 1);

		int r = 1;
		for (int j = 0; j < i; ++j) {
			r *= R;
		}
		sum += a * r;
	}

	int h = sum % M;
	cout << h;
}