#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n,k;
    cin >> n >> k;

    map<int,pair<ll,ll>> u;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(u.count(a)==0)
        {
            u[a].first=i;
            u[a].second=i;
        }
        else 
        {
        u[a].second=i;
        }
    }


     while(k--)
     {
        ll a,b;
        cin >> a >>b;
        
        if(u.count(a)!=0  &&  u.count(b)!=0)
        {
        if(u[a].first<u[b].second)
        {
            cout << "YES" <<endl;

        }
        else cout << "NO" <<endl;
        }
        else cout << "NO"<<endl;
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