#include <iostream>
using namespace std;

int maxi(int l, int r)
{
    int maxx=0;
    while(r>1)
    {
        r/=2;
        maxx++;
    }
    return maxx;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        int result = maxi(l,r);
        cout << result<<endl;
    }


}