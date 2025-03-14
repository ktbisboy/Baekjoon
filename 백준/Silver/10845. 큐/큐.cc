#include <iostream>
#include <vector>
using namespace std;

int main() {
	int arr[10000];
	int idx1 = 0;
	int idx2 = 0;

	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			cin >> n;
			arr[idx2] = n;
			++idx2;
		}
		else if (str == "pop") {
			if (idx1 == idx2) cout << -1 << endl;
			else {
				cout << arr[idx1] << endl;
				arr[idx1] = -1;
				++idx1;
			}
		}
		else if (str == "size") {
			cout << idx2 - idx1 << endl;
		}
		else if (str == "empty") {
			if (idx1 == idx2) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (str == "front") {
			if (idx1 == idx2) cout << -1 << endl;
			else cout << arr[idx1] << endl;
		}
		else if (str == "back") {
			if (idx1 == idx2) cout << -1 << endl;
			else cout << arr[idx2 - 1] << endl;
		}
	}
}