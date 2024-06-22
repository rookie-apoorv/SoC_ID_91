#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll sum = a[n-1];
    sort(a.begin(),a.end() - 1 );
     sum += a[n-2];
    cout << sum << endl;
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