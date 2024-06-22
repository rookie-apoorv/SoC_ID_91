#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    
    int s=0;
    for(int i=0;i<2*n-1;i++)
    {
        s+= a[i+1]-a[i];
    }
    s = s - (a[n] - a[n-1]);
    cout <<s <<endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " " << a[i+n]<<endl;
    }
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