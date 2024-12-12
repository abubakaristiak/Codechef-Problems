/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-11 || 10:59:59
 * * * * File    : Bidding.cpp
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
    while(t--){
        int a,b,c; cin >> a >> b >> c;
        if(a>b && a>c){
            cout << "Alice" << endl;
        }else if(b>a && b>c){
            cout << "Bob" << endl;
        }else cout << "Charlie" << endl;
    }
    return 0;


// Alhamdulillah
}