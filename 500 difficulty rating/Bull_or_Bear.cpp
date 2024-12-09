/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-09 || 14:40:57
 * * * * File    : Bull_or_Bear.cpp
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
        int buy, sell; cin >> buy >> sell;
        int res=sell-buy;
        if(res==0){
            cout << "NEUTRAL" << endl;
        }else if(res<0){
            cout << "LOSS" << endl;
        }else{
            cout << "PROFIT" << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}