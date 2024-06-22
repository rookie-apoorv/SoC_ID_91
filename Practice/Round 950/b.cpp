#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--)
    {

    

    int n,f,k;
    cin >> n >> f >> k;

    vector<int> a(n);
    vector<int> b(100);

    for(int i=0; i<n;i++)
    {
        cin >> a[i];
        b[a[i]-1]++;
    }

    int value = a[f-1];
    int num_value=b[value-1];
    int before=0;
    
    
    for(int i=value;i<100;i++)
    {
        before+=b[i];
    }

    if(k<=before)
    {
        cout << "NO" <<endl;
        
    }    
    else if(k>=before+num_value)
    {
        cout << "YES" <<endl;
        

    }
    else 
    {cout << "MAYBE" <<endl;}
}
}