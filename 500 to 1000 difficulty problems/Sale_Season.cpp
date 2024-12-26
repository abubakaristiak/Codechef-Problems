#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if(n<=100){
            cout << n << endl;
        }else if(n>100 && n<=1000){
            cout << n-25 << endl;
        }else if(n>1000 && n<=5000){
            cout << n-100 << endl;
        }else if(n>5000){
            cout << n-500 << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}