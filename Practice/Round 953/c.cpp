    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    ll mman(int n)
    {
        n--;
        ll sum=0;
        while(n>=0)
        {
            sum+=n;
            n -=2;
            //cout << sum << " ";
        }
        return sum*2;
    }
    void solve()
    {
        ll n,k;
        cin >> n >>k;

        vector<int> a(n+1);

        for(int i=1;i<n+1;i++)
        { a[i]=i;}
        ll max_manhattan = mman(n);
        if((k%2 !=0 ) || (k > max_manhattan)) 
        {
            cout << "NO" <<endl;
            return;
        }
        
        //cout << max_manhattan <<endl;
    
        else if(k == max_manhattan) 
        {
            cout << "YES" <<endl;
            for(int i=0;i<n;i++) cout << a[n-i] << " ";
            cout << endl;
            return;
        }
        else if(k < max_manhattan )
        {
            cout << "YES" <<endl;
            int curr_max=n;
            int curr_min = 1;
            while(k>0)
            {
                if((curr_max-curr_min)*2 <= k)
                {
                    swap(a[curr_min],a[curr_max]);
                    k -= ((curr_max)-(curr_min))*2;
                    curr_max--;
                    curr_min++;
                }
                else
                {
                    curr_min++;
                    if(curr_min>=curr_max) break;
                }
                
            }
            for(int i=0;i<n;i++ ) cout << a[i+1] << " ";
            cout << endl;
            return;
        }


    }

    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--)
    {
    solve();
    }
    }