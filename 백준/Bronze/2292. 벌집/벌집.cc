#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int start = 1;
    int x1 = 1;
    int x2 = 6;
    int count = 1;
    while(n > start) {
        ++count;

        for(int i=0; i<x1; ++i) {
            start += x2;
        }
        ++x1;
    }

    cout << count;
}