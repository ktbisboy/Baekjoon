#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(6);
    for(int i = 0; i< 6 ; ++i) {
        cin >> arr[i];
    }
    int t, p;
    cin >> t >> p;
    
    int c1 = 0;
    for(int i = 0; i< 6 ; ++i) {
        c1 += arr[i] / t;
        if(arr[i] % t != 0) ++c1;
    }
    
    cout << c1 << endl;
    cout << n / p << " " << n % p;
}