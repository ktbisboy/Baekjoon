#include <iostream>
#include <vector>
using namespace std;

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

	vector<int> rank(n, 1);
	for (int i = 0; i < n; ++i) {
		int x = 0;
		for (int j = 0; j < n; ++j) {
			if (i == j) continue;

			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				++rank[i];
		}	
	}

	for (int i = 0; i < n; ++i) {
		cout << rank[i] << " ";
	}
}