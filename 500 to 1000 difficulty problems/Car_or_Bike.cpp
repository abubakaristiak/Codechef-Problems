/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-12 || 19:05:06
 * * * * File    : Car_or_Bike.cpp
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
        int bike,car; cin >> bike >> car;
        if(bike<car){
            cout << "BIKE" << endl;
        }else if(bike>car){
            cout << "CAR" << endl;
        }else cout << "SAME" << endl;
    }
    
    return 0;


// Alhamdulillah
}