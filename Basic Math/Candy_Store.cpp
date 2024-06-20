//https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CANDYSTORE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        if(x>=y){
            cout << y<<endl;
        }
        else{
            int a = x + 2*(y-x);
            cout << a<<endl;
        }
    }
    
    return 0;
}