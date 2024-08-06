#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >>b;
    char ans[n+2];
    ans[0] = a[0];
    int cnt=1;
    for(int i=0;i<n;i++) ans[i+1] = b[i];
    for(int i=1;i<n;i++)
    {
        if(a[i] == b[i-1])
        {
            cnt++;
        }
        if(a[i] < b[i-1])
        {
            ans[i] = a[i];
            cnt=1;
        }
        if(a[i] > b[i-1])
        {
            break;
        }
    }
    ans[n+1] = '\0';
    cout << ans << "\n" << cnt << "\n";
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