#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    if(a[0] != 1) {
        cout << "NO" << endl;
        return;
    }
    long long sum = a[0];
    for(int i = 1; i < n; ++i) {
        if(sum < a[i]) {
            cout << "NO" << endl;
            return;
        }
        sum += a[i];
    }
    cout << "YES" <<endl;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t; 
cin >> t;
while(t--)
{
solve();
}
}