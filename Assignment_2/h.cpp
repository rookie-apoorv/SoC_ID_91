#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    for(int len=1; len <= n; len++)
    {
        if(n%len == 0)
        {
            int count=0;
            for(int preIndx = 0; preIndx < len ;preIndx ++)
            {
                for(int otherIndx=preIndx+len; otherIndx < n; otherIndx += len)
                {
                    if(s[preIndx] != s[otherIndx]) 
                    {
                        count++;
                    }
                }
            }
            if(count <= 1) 
            {
                cout << len << endl;
                break;
            }
            count=0;
            for(int sufIndx = n-len; sufIndx < n; sufIndx++)
            {
                for(int otherIndx= sufIndx-len; otherIndx >= 0; otherIndx -= len)
                {
                    if(s[otherIndx] != s[sufIndx])
                    {
                        count++;
                    }
                }
            }
            if(count <= 1)
            {
                cout << len << endl;
                break;
            }

        }
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