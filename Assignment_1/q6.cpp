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

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];

        }
        

        int mini=arr[0];
        for(int i=1; i<n; i++)
        {
            if(mini>arr[i])
            {
                mini=arr[i];
                break;
            }
        }
        cout << mini << endl;
         
    }
}