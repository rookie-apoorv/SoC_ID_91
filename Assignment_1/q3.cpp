#include <bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--)
{
    
int n,k;
cin>> n >> k;
vector<int> a(n);

for(int i=0;i<n;i++)
{
    cin >>a[i]; 
}
int i=0;
int j=n-1;


for(int c=0;c<=n-2;c++)

{
    if(a[i]+a[j]==k)
    {
        cout << i+1 << " " << j+1 <<endl;
        
        break;
    }
    else if(a[i]+a[j]<k)
    {
        i++;
    }
    else if(a[i]+a[j]>k)
    {
        j--;
    }

}

}
}