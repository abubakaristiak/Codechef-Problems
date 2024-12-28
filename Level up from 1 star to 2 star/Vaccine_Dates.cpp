/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-28 || 19:06:36
 * * * * File    : Vaccine_Dates.cpp
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
        int d,l,r; cin >> d >> l >> r;
        if(d>=l && d<=r){
            cout << "Take second dose now" << endl;
        }else if(d>r){
            cout << "Too Late" << endl;
        }else cout << "Too Early" << endl;
    }
    
    return 0;


// Alhamdulillah
}