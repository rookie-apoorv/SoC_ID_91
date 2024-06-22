#include <iostream>
#include <cmath>
using namespace std;

int numPrimeFac(int x)
{
    int a=x;
    int n=0;
    while(x%2==0)
    {
        x=x/2;
        n++;
    }
    for(int i=3; i<=sqrt(x); i=i+2)
    {
        while(x%i==0)
        {
            x=x/i;
            n++;

        }
    }
    if(x>2) n++;
    return n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

    
    int l,r;
    cin >> l >> r;
    int max=0;

    for(int j=r/2;j<r+1; j++)
    {
        if(max<numPrimeFac(j))
        {
            max=numPrimeFac(j);
        }

    }
    cout << max << endl;
    }
    

}
