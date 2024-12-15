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
    int x; cin >> x;
    double y; cin >> y;
    if(x%5==0 && x+0.50<=y){
        y-=(x+0.50);
    }
    cout << fixed << setprecision(2) << y << endl;
    return 0;


// Alhamdulillah
}