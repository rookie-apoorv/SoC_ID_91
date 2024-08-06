#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
   int N;
	cin >> N;
	vector<ll> a(N);
	for(ll& x : a) cin >> x;
	vector<ll> psums(N+1);
	for(int i = 0; i < N; i++){
		psums[i+1] = psums[i] + a[i];
	}
	ll best = 0;
	for(int i = 0; i <= N; i++){
		best = max(best, abs(psums[i]) + psums[N] - psums[i]);
	}
	cout << best << '\n';
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