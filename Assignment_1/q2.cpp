#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool compli(char a, char b)
{
    if(a==40 && b==41)
    {return 1;}
    if(a==91 && b==93)
    {return 1;}
    if(a==123 && b==125)
    {return 1;}
    else return 0;
}



int main()

{
    vector<char> open(100);
    char curropen;
    int a=-1;

    string s;
    cin >> s;
    int l=s.size();
    bool b=0;

    for(int i=0; i<l; i++)
    {
        if((s[i]==40) || (s[i]==91) || (s[i]==123))
        {
            a++;
            open[a]=s[i];
            curropen=s[i];
        }

        if((s[i]==41) || (s[i]==93) || (s[i]==125))
        {
            if(a==-1)
            {
                
                b=1;
                break;
            }
            if(!compli(curropen,s[i]))
            {
                b=1;
                break;
            }
            else if(compli(curropen,s[i]))
            {
                if(a!=0)
                {a--;
                curropen=s[a];
                }

            }
        }
    }  
    if(a!=0)
    {
        cout << "NO" <<endl;
        return 0;
    }
    

    if(b)
    {
        cout << "NO" << endl;

    }
    else cout << "YES" <<endl;

   
}