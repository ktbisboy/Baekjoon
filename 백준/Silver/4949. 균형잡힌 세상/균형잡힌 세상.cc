#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string str;
        getline(cin, str);
        if (str == ".") break;

        stack<char> s;
        bool flag = true;
        for (char ch : str) {
            if (ch == '(' || ch == '[') {
                s.push(ch);
            }
            else if (ch == ')') {
                if (s.empty() || s.top() != '(') {
                    flag = false;
                    break;
                }
                s.pop();
            }
            else if (ch == ']') {
                if (s.empty() || s.top() != '[') {
                    flag = false;
                    break;
                }
                s.pop();
            }
        }

        if (!s.empty()) flag = false;
        cout << (flag ? "yes" : "no") << "\n";
    }
    return 0;
}
