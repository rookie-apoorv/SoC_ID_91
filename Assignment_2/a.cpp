#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    /*vector<int> diff(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++) diff[i] = a[i+1]-a[i];*/
     
    if(n%2 != 0)
    {
        cout << "YES" <<endl;
        return;
    }
    else 
    {
        for(int i=0;i<n-2;i++)
        {
            a[i+2] -= (a[i+1]-a[i]);
            a[i+1] = a[i];
        }
        if(a[n-1]>=a[n-2])
        {
            cout << "YES" <<endl;
        }
        else cout << "NO" <<endl;
    }
    return;
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