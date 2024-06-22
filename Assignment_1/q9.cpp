#include <iostream>
#include <string>
#include <vector>
using namespace std;



bool isdistinct(string s,int l,int r)
{
    bool b=0;
    vector<int> arr(26);
    for(int i=l; i<r; i++)
    {
        arr[int(s[i])-97]++;

    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]>1) {b=1;}
    }
    if(b)
    {
        return 0;
    }
    else return 1;
}




int main()
{
    int k;
    string s;

    cin >> k;
    cin >> s;
    int num=0;
    


    for(int i=0; i<s.size()-k+1; i++)
    {
        if(isdistinct(s,i,i+k))
        {
            num++;
        }
    }
    cout << num;
}