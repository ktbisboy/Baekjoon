#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(true) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
        
        if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}