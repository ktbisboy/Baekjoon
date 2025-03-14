#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool f = false;
    for(int i=1; i<=n; ++i) {
        string number = to_string(i);
        
        int sum = i;
        for(int j=0; j<number.size(); ++j) {
            sum += number[j] - '0';
        }
        
        if(sum == n) {
            f = true;
            cout << i;
            break;
        }
    }

    if(!f) cout << 0;
}