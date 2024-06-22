#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n,m;
    cin >> n >> m;

    string a;
    cin >>a;
    vector<int> b(7);
    for(int i=0; i<n;i++)

    {
        
        if(a[i] == 'A')
        {
            b[0]++;
        }
        if(a[i] == 'B')
        {
            b[1]++;
        }
        if(a[i] == 'C')
        {
            b[2]++;
        }
        if(a[i] == 'D')
        {
            b[3]++;
        }
        if(a[i] == 'E')
        {
            b[4]++;
        }
        if(a[i] == 'F')
        {
            b[5]++;
        }
        if(a[i] == 'G')
        {
            b[6]++;
        }

    }
    
    
    int sum=0;

    

    for(int i=0;i<7;i++)
    {
        
        if(b[i]<m)
        {
            
            sum+=m-b[i];
        }
    }
    
    cout << sum << endl;


    
    
    
}
}