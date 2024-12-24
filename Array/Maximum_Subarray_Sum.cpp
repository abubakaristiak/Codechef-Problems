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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cur_mx=v[0];
        int glob_mx=v[0];

        for(int i=1; i<n; i++){
            cur_mx=max(v[i], cur_mx+v[i]);
            glob_mx=max(cur_mx, glob_mx);
        }

        cout << glob_mx << endl;
    }
    
    return 0;


// Alhamdulillah
}