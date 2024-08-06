#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> true1(n / 2), true2(n / 2);
    for (int i = 0; i < 2; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < n; ++j) if ((i + j) & 1) {
        true1[(i + j) / 2] |= (s[j] == '>');
        true2[(j - i + 1) / 2] |= (s[j] == '>');
      }
    }
    bool ans = true;
    for (int i = 0; i < n / 2; i++) ans &= true1[i] && true2[i];
    cout << (ans ? "YES" : "NO") << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}