/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-26 || 21:25:21
 * * * * File    : Water_Filling.cpp
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
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c; 
        cin >> a >> b >> c;

        int empty_cnt=0;
        if(a==0){
            empty_cnt++;
        }
        if(b==0){
            empty_cnt++;
        }
        if(c==0){
            empty_cnt++;
        }

        if (empty_cnt >= 2) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }
    return 0;


// Alhamdulillah
}