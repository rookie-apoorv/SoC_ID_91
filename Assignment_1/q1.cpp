#include <bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
    
int n,k;
cin >> n >>k;
vector<int> a(n);
for(int i=0;i<n;i++) cin >> a[i];

vector<int> sum_end_here(n+1);
for(int i=0;i<n+1;i++) sum_end_here[i+1]=sum_end_here[i]+a[i];
bool b=0;
int right = 0 , left =0;
int min_length =INT_MAX;
for(right=0;right<n;right++)
{
    if(sum_end_here[right+1]-sum_end_here[left]<k)
    {
        continue;
    }
    while(sum_end_here[right+1]-sum_end_here[left]>=k)
    {
        b=1;
        min_length = min(min_length,right-left+1);
        left++;

    }
}
if(b==0)
{
    cout << -1 <<endl;
}
else cout << min_length <<endl;
}
}