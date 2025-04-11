#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		queue<pair<int, int>> q;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;

			q.push({ i, x });
		}

		int count = 0;
		while (!q.empty()) {
			pair<int, int> cur = q.front();
			q.pop();
			bool f = true;

			queue<pair<int, int>> temp = q;
			while (!temp.empty()) {
				if (temp.front().second > cur.second) {
					f = false;
					break;
				}
				temp.pop();
			}

			if (f) {
				++count;
				if (cur.first == m) {
					cout << count << "\n";
					break;
				}
			}
			else {
				q.push(cur);
			}
		}
	}
}