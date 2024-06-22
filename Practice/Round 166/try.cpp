#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    cout << a[0] << endl << a[1];
    
    if(97 < a[0] < 122 && 48 < a[1] < 57)
    {
        cout << "HI";

    }
}