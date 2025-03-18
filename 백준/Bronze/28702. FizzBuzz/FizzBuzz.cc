#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> arr(3);
	cin >> arr[0] >> arr[1] >> arr[2];

	string stand;
	int idx;
	for (int i = 0; i < 3; ++i) {
		if (arr[i][0] == 'F' || arr[i][0] == 'B')
			continue;
		stand = arr[i];
		idx = i;
	}

	int n = stoi(stand);
	if (idx == 0)
		n = n + 3;
	else if (idx == 1)
		n = n + 2;
	else
		n = n + 1;

	if (n % 3 == 0 && n % 5 == 0)
		cout << "FizzBuzz";
	else if (n % 3 == 0)
		cout << "Fizz";
	else if (n % 5 == 0)
		cout << "Buzz";
	else
		cout << n;

}
