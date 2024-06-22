#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,d;
    cin >> n >> d;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int i=n-1;
    int sum=0;
    int count=0;
    while(sum<=n)
    {
        sum += (d/a[i] + 1);
        i--;
        count++;
    }
    sum -= (d/a[i+1] +1);
    count--;
    cout << count <<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;


while(t--)
{
    solve();
}
}