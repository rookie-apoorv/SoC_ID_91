#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int num=0;
    for(int i=0; i<n+1; i++)
    {
        if((n+i) == (n ^ i))
        {
            num++;
        }

    }
    cout << num << endl;
}
}