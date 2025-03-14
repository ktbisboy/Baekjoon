#include <iostream>
using namespace std;

int main() {
	int l;
	cin >> l;
	string str;
	cin >> str;

	const int R = 31;
	const int M = 1234567891;

	long long sum = 0;
	long long r = 1;
	for (int i = 0; i < l; ++i) {
		int a = (str[i] - 'a' + 1);
		sum = (sum + a * r) % M;
		r = (r * R) % M;
	}

	cout << sum;
}