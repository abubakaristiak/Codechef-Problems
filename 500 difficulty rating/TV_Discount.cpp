/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-20 || 17:07:07
 * * * * File    : TV_Discount.cpp
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
        int a,b, c,d; cin >> a >> b >> c >> d;
        int firstTv_price = a-c;
        int secondTv_price = b-d;

        if(firstTv_price<secondTv_price){
            cout << "First" << endl;
        }else if(firstTv_price==secondTv_price){
            cout << "Any" << endl;
        }else cout << "Second" << endl;
    }
    
    return 0;


// Alhamdulillah
}