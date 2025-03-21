#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n; ++i) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}