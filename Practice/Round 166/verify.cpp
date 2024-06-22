#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j=0 ; j<t; j++)
    {

    
    int n;
    cin >> n;

    string a;
    cin >> a;

    bool letter=1;
    bool digit =1 ;
    bool order =1;
    //cout << order << endl;
    char prev_digit='0';
    char prev_letter ='a';

    

    for(int i=0; i<n; i++)
    {
       
        if(i!=n-1)
        {
           
            if((48 <= a[i+1] && a[i] <= 57) && (97 <= a[i]  && a[i]<= 122))
            {
               
                order =0;
            }
        }

        if(48 <= a[i+1] && a[i+1]<= 57)
        {
            if(a[i]<prev_digit)
            {
                digit =0;
            }
            prev_digit=a[i];
        }

        if(97 <= a[i] && a[i] <= 122)
        {
            if(a[i] < prev_letter)
            {
                letter =0;
            }
            prev_letter=a[i];
        }
    if(order && letter && digit ==0)
    {
        break;
    }
    
    }
    if((order && letter && digit) ==0) 
    {
        cout << "NO"<<endl;

    }
    else cout << "YES" << endl;
    }
}