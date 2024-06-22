#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_in_arr(vector<int>& arr, int k)

{
    int maxsofar=INT16_MIN;
    for(int s=0;s<k;s++)
    {
        if(maxsofar<arr[s]) maxsofar = arr[s];
    }
    return maxsofar;
}


int main()
{
    int t;
    cin >> t;
    for(int j=0;j<t;j++)
    {
       
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> ans(n-k+1);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<n-k+1; i++)
        {
            vector<int> temp(k);
            for(int g=0; g<k; g++)
            {
                temp[g]=arr[g+i];
            }
            ans[i]=max_in_arr(temp,k);


        }
    for(int i=0;i<n-k+1;i++)
    {
        cout << ans[i] << " " ;
    }
    cout << endl;



    }

}