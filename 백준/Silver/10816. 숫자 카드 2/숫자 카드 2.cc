#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int m;
	cin >> m;
	for (int j = 0; j < m; ++j) {
		int x;
		cin >> x;

		int cnt = upper_bound(arr.begin(), arr.end(), x) - lower_bound(arr.begin(), arr.end(), x);

		cout << cnt << " ";
	}
}