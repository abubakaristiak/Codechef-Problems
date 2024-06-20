//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x >>y >> z;
        if(x != y && y != z && x != z){{
                cout << "YES"<<endl;
            }
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}