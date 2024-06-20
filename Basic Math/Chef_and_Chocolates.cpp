//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int total = x*5 + y*10;
        int chocolates = total/z;
        cout << chocolates << endl;
    }
    
    return 0;
}