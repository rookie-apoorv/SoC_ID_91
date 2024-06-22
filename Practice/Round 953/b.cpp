#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll profit(ll k,ll a, ll b,ll n)
{
    return (b+1)*k - k*(k+1)/2 + a*(n-k);
}
void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll optk;
    ll diff = b - a;
    if(diff <=0)
    {
        optk = 0;
    }
    else if(diff > min(n,b)){optk = min(n,b);}
    else
    {
        optk = profit(b-a,a,b,n) >profit(b-a+1,a,b,n)  ? b-a : b-a+1;
    }
    //cout << optk <<endl;
    cout << profit(optk,a,b,n) << endl;
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