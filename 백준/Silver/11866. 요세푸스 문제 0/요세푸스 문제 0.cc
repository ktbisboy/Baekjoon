#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		arr[i] = 1;
	}

	int idx = -1;
	int size = n;
	int count = 0;
	cout << "<";
	while (size > 0) {
		idx = (idx + 1) % n;
		if (!arr[idx])
			continue;

		++count;
		if (count == k) {
			count = 0;
			arr[idx] = 0;
			--size;

			if (size != 0)
				cout << idx + 1 << ", ";
			else
				cout << idx + 1 << ">";
		}
	}
}

// 1 2 3v 4 5 6 7
// 4 5 6v 7 1 2
// 7 1 2v 4 5
// 4 5 7v 1
// 1 4 5v
// 1v 4
// 4v