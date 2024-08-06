#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int c[n + 1];  
    for (int i = 1; i < n; i++) {
        cin >> c[i];
    }

    int p = 1;  
    while (p < t) {
        p += c[p];  
    }

    if (p == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
