//https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; 
    cin >> test ;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        int f_mx = INT_MIN;
        int s_mx = INT_MAX;
        for(int i=0; i<n; i++){
            if(ar[i]>f_mx){
                s_mx = f_mx;
                f_mx = ar[i];
            }
            else if((ar[i]>s_mx) && (ar[i]<f_mx)){
                s_mx = ar[i];
            }
        }
        int sum = f_mx+s_mx;
        cout << sum << endl;
    }
    
    return 0;
}