#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;

		bool flag = true;
		int idx = 0;
		stack<char> s;
		while (idx < str.size()) {
			if (str[idx] == '(')
				s.push(str[idx]);
			else if (str[idx] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}

			++idx;
		}

		if (!s.empty())
			flag = false;

		if (flag)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}