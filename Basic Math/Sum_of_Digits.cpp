//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n;
        cin>> n;
        int sum = 0; 
        while (n != 0)
        {
            int a = n%10;
            sum +=a;
            n /=10;
        }
        cout << sum<<endl;
    }
    
    return 0;
}