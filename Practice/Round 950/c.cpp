#include <iostream>
#include <vector>
using namespace std;
bool isequal(vector<int> a,vector<int>b,int n)
{
    bool g=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            g = g && 1;
        }
        else g=0;
    }
    return g;
}

vector<int> compare(vector<int> a, vector<int> b,int n, int& num)
{
    
    int j=0;
    vector<int> c(n);
    for(int i=0; i<n; i++)

    {
        if(a[i]!=b[i])
        {
            num++;
            c[j]=b[i];
            j++;
        }
    }
    return c;

}
bool find(vector<int>& d,int m,int value)
{
  bool b=0;
  for(int i=0; i<m; i++ )
    {
        if(d[i]==value)
        {
            b=1;
            d[i]=0;
            break;
        }
    }
    return b;

}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n;i++)
    {
        cin >> a[i];

    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];

    }
    int m;
    cin >>m;
    vector<int> d(m);
    for(int i=0;i<m;i++)
    {
        cin >> d[i];
    }
    int num=0;
    if(isequal(a,b,n))
    {
        cout << ""
    }
    vector<int> c(compare(a,b,n,num));
    if(num>m)
    {
        cout << "NO" <<endl;

    }
    bool f=1;
    for(int i=0; i<c.size();i++ )
    {
        f= (find(d,m,c[i])) && f;
        
    }
    if(f)
    {
        cout << "YES" <<endl;

    }
    if((f==0)&&(num<=m))
    {
        cout << "NO" <<endl;

    }



}
}