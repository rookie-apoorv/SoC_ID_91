#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(vector<int>& arr, int n) {
        int a,b;
        a=INT16_MIN;
        b=0;
        for(int i=0; i<n; i++)
        {
            b = b+arr[i];
            a = max(a,b);
            if(b<0) b=0;
        }
    return a;
}

int main()
 {
    int t;
    cin >> t;
    for(int j=0;j<t;j++)
    {
    

        int n;
        cin >> n;

        vector<int> arr(n,0);

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int result = kadane(arr,n);
        cout << result << endl;
    
    }
}

