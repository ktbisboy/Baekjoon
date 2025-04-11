#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
		

	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	double deleteN = n * 0.15;
	int result = round(deleteN);

	double sum = 0;
	int count = 0;
	for (int i = result; i < n - result; ++i) {
		sum += arr[i];
		++count;
	}

	double avg = sum / count;

	cout << round(avg);
}