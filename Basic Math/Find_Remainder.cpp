//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW002
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        int remainder = a%b;
        cout << remainder <<endl;
    }
    
    return 0;
}