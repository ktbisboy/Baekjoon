#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr[10001] = { 0 };
	for (int i = 0; i < n; ++i) {
		int idx;
		cin >> idx;

		++arr[idx];
	}
	
	int idx = 1;
	while(idx < 10001) {
		if (arr[idx] != 0) {
			cout << idx << "\n";
			--arr[idx];
		}
		else {
			++idx;
		}
	}
}
