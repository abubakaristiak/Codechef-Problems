/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-21 || 14:45:26
 * * * * File    : Practice_makes_us_perfect.cpp
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
    int a,b,c,d; cin >> a >> b >> c >> d;
    vector<int> v={a,b,c,d};
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>=10){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;


// Alhamdulillah
}