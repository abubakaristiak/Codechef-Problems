/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-23 || 21:52:35
 * * * * File    : Bucket_and_Water_Flow.cpp
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
        int w,x,y,z; cin >> w >> x >> y >> z;

        int val = (y*z)+w;
        if(val==x){
            cout << "filled" << endl;
        }else if(val>x){
            cout << "overflow" << endl;
        }else cout << "Unfilled" << endl;
    }
    
    return 0;


// Alhamdulillah
}