/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-11 || 00:51:45
 * * * * File    : Messi_vs_Ronaldo.cpp
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
    int a,b, x,y; cin >> a >> b >> x >> y;
    int messi=a*2+b;
    int ronaldo=x*2+y;
    if(messi==ronaldo){
        cout << "Equal" << endl;
    }else if(messi>ronaldo){
        cout << "Messi" << endl;
    }else cout << "Ronaldo" << endl;
    return 0;


// Alhamdulillah
}