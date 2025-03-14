#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    vector<int> sum;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            for(int k=j+1; k<n; ++k) {
                sum.push_back(arr[i] + arr[j] + arr[k]);
            }
        }
    }

    vector<int> temp = sum;
    for(int i = 0; i<sum.size(); ++i) {
        temp[i] = m - sum[i];
    }

    int minN = INT_MAX;
    int minI = -1;
    for(int i = 0; i<temp.size(); ++i) {
        if(temp[i] >= 0 && temp[i] < minN) {
            minN = temp[i];
            minI = i;
        }
    }

    cout << sum[minI];
}