#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n;
    cin >> n;
    map<ll,ll> notes;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        notes[x]++;
    }
    //cout << notes[1]<<endl;
    ll count=0;
    count = notes[1]*notes[2];
    //notes[2] -= count;
   // notes[1] -= count;
    for(auto x : notes)
    {
        
        count += (x.second)*(x.second -1)/2;
    }

    cout << count << endl;
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