/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-12 || 18:47:22
 * * * * File    : Chef_and_Candies.cpp
 */



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
        int n,x; cin >> n >> x;
        if(x>n){
            cout << 0 << endl;
        }else{
            int tmpresult = n-x;
            int ans = tmpresult/4;
            if(tmpresult%4!=0){
                ans++;
            }
            cout << ans << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}