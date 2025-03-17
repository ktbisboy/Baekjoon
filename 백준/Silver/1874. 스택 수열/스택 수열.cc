#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    stack<int> st;
    vector<char> op;
    int cur = 1;
    int idx = 0;

    while (idx < n) {
        int tgt = arr[idx++];

        while (cur <= tgt) {
            st.push(cur++);
            op.push_back('+');
        }

        if (tgt == st.top()) {
            st.pop();
            op.push_back('-');
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }

    for (char c : op) {
        cout << c << '\n';
    }

    return 0;
}
