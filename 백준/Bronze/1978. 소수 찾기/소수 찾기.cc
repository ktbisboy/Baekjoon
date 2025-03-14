#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i=0; i<n; ++i) {
        if(arr[i] == 1) continue;
        
        bool f = true;
        for(int j=2; j<arr[i]; ++j) {
            if(arr[i] % j == 0) {
                f = false;
                break;
            }
        }
        
        if(f) ++cnt;
    }
    
    cout << cnt;
}