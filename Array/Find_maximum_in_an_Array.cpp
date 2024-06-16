#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int mx = -1;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mx = max(mx,x);   //-> if(x>max)max = x;

        }
        cout << mx << endl;
    }
    
    return 0;
}