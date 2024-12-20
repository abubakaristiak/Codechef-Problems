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
        int x,y; cin >> x >> y;
        int disposable = x*100;
        int cloth = y*10;
        if(disposable<cloth){
            cout << "Disposable" << endl;
        }else cout << "Cloth" << endl;
    }
    
    return 0;


// Alhamdulillah
}