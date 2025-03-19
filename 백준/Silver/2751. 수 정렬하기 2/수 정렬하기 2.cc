#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getDigit(int number, int position) {
    for (int i = 1; i < position; i++) {
        number /= 10;
    }
    return number % 10;
}

void radixSort(vector<int>& arr, int maxDigits) {
    for (int digitPos = 1; digitPos <= maxDigits; digitPos++) {
        vector<vector<int>> buckets(10);

        for (int num : arr) {
            int digit = getDigit(num, digitPos);
            buckets[digit].push_back(num);
        }

        int index = 0;
        for (int i = 0; i < 10; i++) {
            for (int num : buckets[i]) {
                arr[index++] = num;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> positives, negatives;
    for (int num : arr) {
        if (num >= 0)
            positives.push_back(num);
        else
            negatives.push_back(-num);
    }

    int maxDigits = 7;

    if (!negatives.empty()) radixSort(negatives, maxDigits);
    if (!positives.empty()) radixSort(positives, maxDigits);

    for (int i = negatives.size() - 1; i >= 0; i--) {
        cout << -negatives[i] << "\n";
    }
    for (int num : positives) {
        cout << num << "\n";
    }

    return 0;
}