#include <iostream>
#include <vector>
using namespace std;

int main() {
	int arr[10001];
	int idx = -1;

	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			cin >> n;
			arr[++idx] = n;
		}
		else if (str == "pop") {
			if (idx >= 0)
			{
				cout << arr[idx] << endl;
				arr[idx--] = -1;
			}
			else cout << -1 << endl;
		}
		else if (str == "size") {
			cout << idx + 1 << endl;
		}
		else if (str == "empty") {
			if (idx == -1) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (str == "top") {
			if (idx == -1) cout << -1 << endl;
			else cout << arr[idx] << endl;
		}
	}
}