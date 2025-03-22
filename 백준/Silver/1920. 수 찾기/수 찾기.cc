#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int m;
	cin >> m;
	vector<pair<int, int>> b(m);
	for (int i = 0; i < m; ++i) {
		cin >> b[i].first;
		b[i].second = i;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int idx1 = 0;
	int idx2 = 0;
	while (idx2 < b.size()) {
		while (idx1 < a.size()&& a[idx1] < b[idx2].first) {
			++idx1;
		}

		if (idx1 < a.size() && a[idx1] == b[idx2].first) {
			b[idx2].first = 1;
		}
		else {
			b[idx2].first = 0;
		}
		++idx2;
	}

	sort(b.begin(), b.end(), cmp);
	for (pair<int, int> p : b) {
		cout << p.first << "\n";
	}
}