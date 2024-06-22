#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n,m;
    cin >> n >> m;
    bool yes=1;
    vector < vector <int> > arr_initial(n, vector<int> (m)), arr_final(n, vector<int> (m)),itemp(n, vector<int> (m)), ftemp(n, vector<int> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr_initial[i][j];  
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr_final[i][j];  
        }
    }

    itemp = arr_initial;
    ftemp = arr_final;

    for(int i=0;i<n;i++)
    {
        sort(itemp[i].begin(),itemp[i].end());
        sort(ftemp[i].begin(),ftemp[i].end());
    }
    sort(itemp.begin(),itemp.end());
    sort(ftemp.begin(),ftemp.end());
    if(itemp != ftemp) yes=0;

    vector < vector <int> > iitemp(m,vector<int> (n)),fftemp(m,vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            iitemp[i][j]=arr_initial[j][i];
            fftemp[i][j]=arr_final[j][i];
        }

    }


    for(int i=0;i<m;i++)
    {
        sort(iitemp[i].begin(),iitemp[i].end());
        sort(fftemp[i].begin(),fftemp[i].end());
    }
    sort(iitemp.begin(),iitemp.end());
    sort(fftemp.begin(),fftemp.end());
    if(iitemp != fftemp) yes=0;

    if(yes) cout << "YES" << endl;
    else cout << "NO" << endl;

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