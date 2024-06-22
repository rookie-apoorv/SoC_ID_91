#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    pair<long long, long long> a[n];
    vector<long long int> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i].first;
        a[i].second=i;
        b[i]=a[i].first;
    }
    vector<long long int> sum_end_here(n);
    sort(a,a + n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i].first;
        sum_end_here[i]=sum;

    }
    int ans[n];
    ans[n-1]=n-1;
    for(int i=n-2; i>=0;i--)
    {
       ans[i] = (sum_end_here[i]>=a[i+1].first) ? ans[i+1] : i; 

    }
    int anss[n];
    for(int i=0;i<n;i++)
    {
        anss[a[i].second]=ans[i];
    }
    for(int i=0;i<n;i++) cout << anss[i] << " ";
    cout << endl;
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