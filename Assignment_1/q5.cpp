#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

    
        int n,k;

        cin >> n >> k;

        vector<int> nums(n);
        for(int e=0; e<n; e++)
        {
            cin >> nums[e];
        }
        vector<int> ans(2);
        bool bb=0;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum = nums[i] + nums[j];
                if(sum==k)
                {
                    ans[0]=i;
                    ans[1]=j;
                    bb=1;
                    break;
                }
            }
            if(bb) break;
        }
        if(!bb)
        {
            cout << -1 << " " << -1 <<endl;
        }
        else{cout << ans[0] << " " << ans[1] << endl;}
    } 
}