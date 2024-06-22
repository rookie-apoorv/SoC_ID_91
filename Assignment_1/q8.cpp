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

            vector<int> arr(n);
            for(int i=0; i<n; i++)
            {
                cin >> arr[i];

            }
            int xorr=0;
            int num=0;

            for(int i=0; i<n; i++)
            {
                for(int j=i; j<n; j++)
                {
                    xorr = (xorr) ^ (arr[j]);
                    
                    if(xorr ==m) 
                    {num++;}

                }
                xorr=0;
            }
            cout << num <<endl;
    }
}