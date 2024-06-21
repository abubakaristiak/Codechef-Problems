#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        sort(ar, ar+n);

        int max_pass_m;
        if(x==0){
            cout << ar[n-1]+1<<endl;
        }
        else{
            cout << ar[n-x]-1<<endl;
        }
    }
    
    return 0;
}