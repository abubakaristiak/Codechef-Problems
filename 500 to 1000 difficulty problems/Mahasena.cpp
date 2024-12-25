/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-25 || 15:36:45
 * * * * File    : Mahasena.cpp
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
    int n; cin >>n;
    vector<int> v(n);
    int evenCnt=0, oddCnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]%2==0){
            evenCnt++;
        }else oddCnt++;
    }

    if(evenCnt>oddCnt){
        cout << "READY FOR BATTLE" << endl;
    }else cout << "NOT READY" << endl;
    return 0;


// Alhamdulillah
}