#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, pair<string, int>>& a, pair<int, pair<string, int>>& b) {
	if (a.first == b.first)
		return a.second.second < b.second.second;
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, pair<string, int>>> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].first >> arr[i].second.first;
		arr[i].second.second = i;
	}

	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n; ++i) {
		cout << arr[i].first << " " << arr[i].second.first << "\n";
	}
}