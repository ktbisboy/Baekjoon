#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int k, n;
		cin >> k >> n;

		vector<vector<int>> arr(k + 1, vector<int>(n + 1));
		for (int i = 0; i <= k; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (i == 0) {
					arr[i][j] = j;
				}
				else {
					int sum = 0;
					for (int k = 1; k <= j; ++k) {
						sum += arr[i - 1][k];
					}
					arr[i][j] = sum;
				}
			}
		}

		cout << arr[k][n] << endl;
	}
}
